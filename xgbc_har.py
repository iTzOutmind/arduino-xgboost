# Import required libs
import pandas as pd
from IPython.display import display
from xgboost import DMatrix, train
from sklearn.preprocessing import LabelEncoder

# Load dataset
heartattack_all_LE = pd.read_csv('datasets/heart_attack_risk_dataset.csv')
heartattack_LE_OHE = pd.read_csv('datasets/heart_attack_risk_dataset.csv')

# Initialize Encoders
leGender = LabelEncoder()       # Female, Male
leHML = LabelEncoder()          # High, Moderate, Low
leChestPain = LabelEncoder()    # Non-anginal, Asymptomatic, Typical, Atypical
leThalassemia = LabelEncoder()  # Normal, Fixed Defect, Reversible Defect
leECG = LabelEncoder()          # Normal, ST-T abnormality, Left ventricular hypertrophy

# Encode categorical columns using LE
heartattack_all_LE['Gender'] = leGender.fit_transform(heartattack_all_LE['Gender'])

heartattack_all_LE['Physical_Activity_Level'] = leHML.fit_transform(heartattack_all_LE['Physical_Activity_Level'])
heartattack_all_LE['Stress_Level'] = leHML.fit_transform(heartattack_all_LE['Stress_Level'])
heartattack_all_LE['Heart_Attack_Risk'] = leHML.fit_transform(heartattack_all_LE['Heart_Attack_Risk'])

heartattack_all_LE['Chest_Pain_Type'] = leChestPain.fit_transform(heartattack_all_LE['Chest_Pain_Type'])
heartattack_all_LE['Thalassemia'] = leThalassemia.fit_transform(heartattack_all_LE['Thalassemia'])
heartattack_all_LE['ECG_Results'] = leECG.fit_transform(heartattack_all_LE['ECG_Results'])

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

