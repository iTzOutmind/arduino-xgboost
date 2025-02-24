# Importing modules
import eval
import dataToIno as di
import pandas as pd
import matplotlib.pyplot as pyplot
from sklearn import metrics
from sklearn.metrics import accuracy_score # Refactor
import xgboost as xgb
from xgboost import XGBClassifier
from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import train_test_split


datasetsPath = 'datasets/gyro/' # Set location of dataset
gyro = pd.read_csv(datasetsPath + 'gyro_mobile.csv')

# Preprocessing dataframe
gyro = gyro.drop(columns='timestamp') # Drop timestamp column

xtrain, xtest, ytrain, ytest = train_test_split( # Split into training and test datasets
    gyro.iloc[:,:6],
    gyro.iloc[:,6:],
    test_size=0.2,
    random_state=0
)

evaldata=[(xtrain,ytrain),(xtest,ytest)]          # Datensatz zur Evaluierung

donor = XGBClassifier()
final = XGBClassifier()
bestIter = None

def trainDonor():
    global donorTrained, bestIter
    # Training the donor model
    donor.set_params(
        objective='binary:logistic',
        n_estimators=10000,             # "Große Anzahl an Schaetzern, die nicht erreicht werden soll"
        early_stopping_rounds=20,       # Anzahl an Runden, bei denen sich das Modell nicht verbessern muss, bis abgebrochen wird
        max_depth=2,
        learning_rate=0.1
    )
    donor.fit(
        xtrain, 
        ytrain, 
        eval_set=evaldata, 
        verbose=False
    )
    bestIter = donor.best_iteration

def trainModel(model, bestIter, prints: bool = False):
    # Set default value, if bestIter hasn't been set yet
    if bestIter == None:
        bestIter = 50
    
    model.set_params(
        objective='binary:logistic',
        # tree_method = 'exact',
        n_estimators=bestIter,
        max_depth=2,
        learning_rate=0.1,
        base_score=0.5
    )
    if prints == True:
        print(f'Model trained using {bestIter} estimators.')

    model.fit(xtrain, 
        ytrain, 
        eval_set=evaldata, 
        verbose=False
    )

trainDonor()
trainModel(final, bestIter)

yhat = final.predict(xtest)

arrayList = di.genArrayList(xtest, 50, 5)

di.sendList(arrayList, True, 2)