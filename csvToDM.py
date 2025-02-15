# Import required libs
import pandas as pd
from xgboost import DMatrix, train

# Load dataset
heartattack = pd.read_csv('datasets/heart_attack_risk_dataset.csv')

