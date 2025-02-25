# Importing modules
import tools.eval as ev
import tools.serialTools as st
import tools.captureTools as ct
import pandas as pd
from sklearn.metrics import accuracy_score # Refactor
import xgboost as xgb
from xgboost import XGBClassifier
from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import train_test_split

datasetsPath = 'datasets/har/'
data = pd.read_csv(datasetsPath + 'heart_attack_risk_dataset.csv')

# Encode Categorical Data
leGender = LabelEncoder()       # Female, Male
leHML = LabelEncoder()          # High, Moderate, Low
leChestPain = LabelEncoder()    # Non-anginal, Asymptomatic, Typical, Atypical
leThalassemia = LabelEncoder()  # Normal, Fixed Defect, Reversible Defect
leECG = LabelEncoder()          # Normal, ST-T abnormality, Left ventricular hypertrophy

data['Gender'] = leGender.fit_transform(data['Gender'])
data['Physical_Activity_Level'] = leHML.fit_transform(data['Physical_Activity_Level'])
data['Stress_Level'] = leHML.fit_transform(data['Stress_Level'])
data['Heart_Attack_Risk'] = leHML.fit_transform(data['Heart_Attack_Risk'])
data['Chest_Pain_Type'] = leChestPain.fit_transform(data['Chest_Pain_Type'])
data['Thalassemia'] = leThalassemia.fit_transform(data['Thalassemia'])
data['ECG_Results'] = leECG.fit_transform(data['ECG_Results'])

# Splitting data into features and labels for training and testing 
xdata = data.iloc[:,:19]
ydata = data.iloc[:,19:]

xtrain, xtest, ytrain, ytest = train_test_split(
    xdata, 
    ydata, 
    test_size=0.2,
    random_state=0
)

evaldata=[(xtrain,ytrain),(xtest,ytest)]

donor = XGBClassifier()
final = XGBClassifier()
bestIter = 0

def trainDonor():
    global bestIter
    # Training the donor model
    donor.set_params(
        objective='multi:softmax',      # Multi-Klassifizierung
        num_class=3,
        learning_rate=0.1,
        n_estimators=10000,             # "Große Anzahl an Schaetzern, die nicht erreicht werden soll"
        early_stopping_rounds=50,       # Anzahl an Runden, bei denen sich das Modell nicht verbessern muss, bis abgebrochen wird
    )
    
    donor.fit(
        xtrain, ytrain, 
        eval_set = evaldata, 
        verbose = False
    )

    bestIter = donor.best_iteration

def trainModel(model, bestIter, prints: bool = False):
    # Set default value, if bestIter hasn't been set yet
    if bestIter == 0:
        bestIter = 50
    
    model.set_params(
        objective='multi:softmax',  # Specify the multi-class classification task
        num_class=3,                # Number of classes (Low, Moderate, High)
        learning_rate=0.1,          # Learning rate for the model
        n_estimators=bestIter,      # Number of boosting rounds (iterations)
        num_parallel_tree=1         # m2c workaround
    )

    model.fit(
        xtrain, ytrain, 
        eval_set = evaldata, 
        verbose = False
    )

    print(f'Model trained using {bestIter} estimators.') if prints == True else None
    
def portToC(model):
    import m2cgen as m2c

    with open('exports/harExport.c','w') as f:
        code = m2c.export_to_c(model)
        f.write(code)
    
    print('Model exported to: "arduino-xgboost/exports/harExport.c"')

trainDonor()
trainModel(final, bestIter)

# portToC(final)

yhat = final.predict(xtest)

noClasses = final.n_classes_
testList = st.genArrayList(xtest, 10)
st.sendArray(testList[0])
# st.sendList(testList, noClasses, datasetsPath)
# ct.generateBaseCapture(final, xtest, datasetsPath)
# ct.generateComparison(datasetsPath)

# for i in testList:
#     print(''.join(str(i)).replace(',',''))