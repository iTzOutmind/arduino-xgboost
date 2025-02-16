# Import required libs
import pandas as pd
# from IPython.display import display
from xgboost import XGBClassifier
from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score

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

# Split DF into Features and Labels
Features_he_all_LE = heartattack_all_LE.iloc[:, :19]
Labels_he_all_LE = heartattack_all_LE.iloc[:, 19:]

# Splitting into Train- and Test-sets
f_train_he_le, f_test_he_le, l_train_he_le, l_test_he_le = train_test_split(
    Features_he_all_LE, 
    Labels_he_all_LE, 
    test_size=0.3, 
    random_state=38
)

# Initialising XGB Classifier

# xgbc =  XGBClassifier()
# xgbc =  XGBClassifier(n_estimators=5, max_depth=2, learning_rate=1, objective='binary:logistic')
xgbc_le =  XGBClassifier(
    objective='multi:softmax',  # Specify the multi-class classification task
    num_class=3,                # Number of classes (Low, Moderate, High)
    max_depth=2,                # Maximum depth of the trees
    learning_rate=0.2,          # Learning rate for the model
    n_estimators=50,            # Number of boosting rounds (iterations)
    random_state=0              # Set random state for reproducibility
)


# Fitting and Predicting
xgbc_le.fit(f_train_he_le, l_train_he_le)
test_preds = xgbc_le.predict(f_test_he_le)
train_preds= xgbc_le.predict(f_train_he_le)



# Evaluation
print(f'Test Accuracy LE: {accuracy_score(l_test_he_le, test_preds)}')
print(f'Train Accuracy LE: {accuracy_score(l_train_he_le, train_preds)}')
