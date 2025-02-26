# Import required libs
import pandas as pd
# from IPython.display import display
from xgboost import XGBClassifier
from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score

# Load dataset
heartattack_LE_OHE = pd.read_csv('datasets/heart_attack_risk_dataset.csv')

# Initialize Encoders
leGender = LabelEncoder()       # Female, Male
leHML = LabelEncoder()          # High, Moderate, Low

# Encode categorical columns using OHE and LE
heartattack_LE_OHE['Gender'] = leGender.fit_transform(heartattack_LE_OHE['Gender'])

heartattack_LE_OHE['Physical_Activity_Level'] = leHML.fit_transform(heartattack_LE_OHE['Physical_Activity_Level'])
heartattack_LE_OHE['Stress_Level'] = leHML.fit_transform(heartattack_LE_OHE['Stress_Level'])
heartattack_LE_OHE['Heart_Attack_Risk'] = leHML.fit_transform(heartattack_LE_OHE['Heart_Attack_Risk'])

heartattack_LE_OHE = heartattack_LE_OHE.join(pd.get_dummies(heartattack_LE_OHE["Chest_Pain_Type"], prefix="CPT", dtype=int))
heartattack_LE_OHE = heartattack_LE_OHE.drop(columns=["Chest_Pain_Type"])

heartattack_LE_OHE = heartattack_LE_OHE.join(pd.get_dummies(heartattack_LE_OHE["Thalassemia"], prefix="T", dtype=int))
heartattack_LE_OHE = heartattack_LE_OHE.drop(columns=["Thalassemia"])

heartattack_LE_OHE = heartattack_LE_OHE.join(pd.get_dummies(heartattack_LE_OHE["ECG_Results"], prefix="ECT", dtype=int))
heartattack_LE_OHE = heartattack_LE_OHE.drop(columns=["ECG_Results"])

# The DF containing the dummified columns is being reodered for better clarity and easier splitting
new_order = ['Age', 'Gender', 'Smoking', 'Alcohol_Consumption', 'Physical_Activity_Level', 'BMI', 'Diabetes', 'Hypertension', 'Cholesterol_Level', 'Resting_BP', 'Heart_Rate', 'Family_History', 'Stress_Level', 'Fasting_Blood_Sugar', 'Exercise_Induced_Angina', 'Max_Heart_Rate_Achieved', 'CPT_Asymptomatic', 'CPT_Atypical', 'CPT_Non-anginal', 'CPT_Typical', 'T_Fixed defect', 'T_Normal', 'T_Reversible defect', 'ECT_Left Ventricular Hypertrophy', 'ECT_Normal', 'ECT_ST-T abnormality', 'Heart_Attack_Risk']

heartattack_LE_OHE = heartattack_LE_OHE[new_order]

# Split DFs into Features and Labels
Features_he_LE_OHE = heartattack_LE_OHE.iloc[:, :26]
Labels_he_LE_OHE = heartattack_LE_OHE.iloc[:, 26:]

# Splitting into Train- and Test-sets
f_train_ohe, f_test_ohe, l_train_ohe, l_test_ohe = train_test_split(
    Features_he_LE_OHE, 
    Labels_he_LE_OHE, 
    test_size=0.3, 
    random_state=38
)

# Initialising XGB Classifier
xgbc_ohe =  XGBClassifier(
    n_estimators=5, 
    max_depth=2, 
    learning_rate=1, 
    objective='binary:logistic'
)

xgbc_ohe.fit(f_train_ohe, l_train_ohe)
ohe_test_preds = xgbc_ohe.predict(f_test_ohe)
ohe_train_preds= xgbc_ohe.predict(f_train_ohe)

print(f'Test Accuracy LE + OHE: {accuracy_score(l_test_ohe, ohe_test_preds)}')
print(f'Train Accuracy LE + OHE: {accuracy_score(l_train_ohe, ohe_train_preds)}')