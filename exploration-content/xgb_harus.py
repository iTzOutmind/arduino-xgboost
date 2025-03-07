import pandas as pd

from xgboost import XGBClassifier

from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score 

from tools import serialTools, captureTools, eval

datasetsPath = 'datasets/harus/'

xNames =    []                              # List of feature (column) names
xtrain =    pd.DataFrame()    # Training data: Features
xtest =     pd.DataFrame()    # Testing data: Features
ytrain =    pd.DataFrame(columns=['label']) # Training data: Labels
ytest =     pd.DataFrame(columns=['label']) # Testing data: Labels

def importData():
    global xtrain, xtest
    # Importing names of the features/columns
    with open(datasetsPath + 'UCI HAR Dataset/features.txt') as f:
        for line in f:                          # Reading each line
            parts = line.strip().split(' ')     # Splitting each line by space

            if len(parts) > 1:                  # If the line has more than 1 element
                label = parts[1]                # The second element is the label
                dupe = False                    # Label is not a dupe, yet!
                index = 0                       # Rising index for naming
                amount = xNames.count(label)    # Check, if the label is already in the list
                
                while amount!=0:                # If a label is already in the list, add a number (index) to it 
                    index = index+1
                    newName = label + '_' + str(index)
                    amount = xNames.count(newName)
                    dupe = True
                if dupe == True:                # If the label has been a duplicate, use the new name
                    xNames.append(newName)    
                else:
                    xNames.append(label)        # Otherwise, just use the original name

    xtrain =    pd.DataFrame(columns=xNames)    # Training data: Features

    # Importing xtrain
    with open(datasetsPath + 'UCI HAR Dataset/train/X_train.txt', 'r') as f:
        for line in f:
            liste = line.strip().split(' ')      # Create a list of every object in the list thats seperated by " "
            liste = [i for i in liste if i != ''] # Remove empty strings
            liste = [float(i) for i in liste]     # Cast every object in the list to float
            xtrain.loc[len(xtrain)] = liste          # Add new_list as a new row to the dataframe

    xtest =     pd.DataFrame(columns=xNames)    # Testing data: Features

    # Importing xtest
    with open(datasetsPath + 'UCI HAR Dataset/test/X_test.txt', 'r') as f:
        for line in f:
            liste = line.strip().split(' ')      # Create a list of every object in the list thats seperated by " "
            liste = [i for i in liste if i != ''] # Remove empty strings
            liste = [float(i) for i in liste]     # Cast every object in the list to float
            xtest.loc[len(xtest)] = liste          # Add new_list as a new row to the dataframe

    # Importing ytrain
    with open(datasetsPath + 'UCI HAR Dataset/train/y_train.txt', 'r') as f:
        labels = []
        for line in f:
            labels.append(int(line.strip())-1)
        
    ytrain['label'] = labels

    # Importing ytest
    with open(datasetsPath + 'UCI HAR Dataset/test/y_test.txt', 'r') as f:
        labels = []
        for line in f:
            labels.append(int(line.strip())-1)
        
    ytest['label'] = labels

    # Preprocessing -> Setting dtypes to columns
    for col in xtrain.columns:
        xtrain[col] = xtrain[col].astype('float32')

    for col in ytrain.columns:
        ytrain[col] = ytrain[col].astype('int32')

bestIter = 0

def trainModel(model: XGBClassifier, feats: pd.DataFrame, labels: pd.DataFrame, setBestIter: bool = False, evalset: list = None):
    global bestIter
    
    if setBestIter == True:
        model.set_params(
            objective='multi:softmax',
            num_class=6,
            learning_rate=0.1,
            n_estimators=10000,
            early_stopping_rounds=100,
            max_depth=3
        )
        model.fit(
            feats, labels,
            eval_set = evalset,
            verbose = False
        )
        bestIter = model.best_iteration
    else:
        model.set_params(
            objective='multi:softmax',
            num_class=6,
            learning_rate=0.1,
            n_estimators=bestIter,
            early_stopping_rounds=None,
            max_depth=3
        )
        model.fit(feats,labels)

# def getImportantFeatures(
        
# )

def main():
    importData()
    print(xtrain)
    model = XGBClassifier()
    evalset = [(xtrain,ytrain),(xtest,ytest)]
    trainModel(model, xtrain, ytrain, True, evalset)
    trainModel(model, xtrain, ytrain)
    print(accuracy_score(ytest,model.predict(xtest)))
    # print(model.feature_importances_)

if __name__ == '__main__':
    main()