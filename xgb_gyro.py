# Importing modules
import copySketches
import pandas as pd
import matplotlib.pyplot as pyplot
from sklearn import metrics
from sklearn.metrics import accuracy_score # Refactor
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

# Training the donor model
donor = XGBClassifier(              # "Spendermodell"
    objective='binary:logistic',
    n_estimators=10000,             # "Große Anzahl an Schaetzern, die nicht erreicht werden soll"
    early_stopping_rounds=20,       # Anzahl an Runden, bei denen sich das Modell nicht verbessern muss, bis abgebrochen wird
    max_depth=2,
    learning_rate=0.1
)

def getBestIter():
    donor.fit(
        xtrain, 
        ytrain, 
        eval_set=evaldata, 
        verbose=False
    )
    return(donor.best_iteration)      # "Optimale" Anzahl an Bäumen

final = XGBClassifier()

def trainModel(model):
    bestIter = getBestIter()

    model.set_params(
        objective='binary:logistic',
        # tree_method = 'exact',
        n_estimators=bestIter,
        max_depth=2,
        learning_rate=0.1,
        base_score=0.5
    )

    model.fit(xtrain, 
        ytrain, 
        eval_set=evaldata, 
        verbose=False
    )

    return(bestIter)

bestIter = trainModel(final)

# Get the final models predictions
yhat = final.predict(xtest)

def printConfusionMatrix(): # Confusion Matrix
    metrics.ConfusionMatrixDisplay.from_estimator(final, xtest, ytest, cmap='Blues')
    pyplot.show()

def plotLossCurves():       # Loss Curves
    # save evaluation results
    results = final.evals_result()
    # plot curves
    lossValue = list(results['validation_1'])[0]
    pyplot.plot(results['validation_0'][lossValue], label='train')
    pyplot.plot(results['validation_1'][lossValue], label='train')
    # show the legend
    pyplot.xlabel('Iterations')
    pyplot.ylabel('Log Loss')
    pyplot.legend()
    # show the plot
    pyplot.show()

def printClassReport():     # Classification Report
    print(metrics.classification_report(ytest, yhat, digits = 3))

def printMisc():            # Best Iter, Test Accuracy, Base Score, Probas,
    # Misc
    print(f'# Trees / Best Iteration: \t{bestIter}')
    print(f'Test Accuracy: \t{accuracy_score(ytest, yhat)}')
    print(f'Base_Score{final.base_score}')
    print(f'\nPredict_Proba Return: \n{final.predict_proba(xtest)}')

printConfusionMatrix()
plotLossCurves()
printClassReport()
printMisc()