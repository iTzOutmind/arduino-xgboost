from xgboost import XGBClassifier
import pandas as pd
import numpy as np

def generateBaseCapture(model: XGBClassifier,xtest: pd.DataFrame,exportpath: str = None):
    probanda = model.predict_proba(xtest).tolist()
    listOfScores = probaToList(probanda)
    scoreNames = []

    for i in range(len(listOfScores)):
        scoreNames.append('baseScore_' + str(i))

    baseCapture = pd.DataFrame()

    for i in range(len(listOfScores)):
        baseCapture[scoreNames[i]] = listOfScores[i]
    
    if exportpath != None:
        baseCapture.to_csv(exportpath + 'baseCapture.csv', index=False)
        print(f'Base Capture generated successfully at: {exportpath}baseCapture.csv')
    else: 
        return(baseCapture)

def importInoCapture(importpath: str = None):
    return(pd.read_csv(importpath + 'inoCapture.csv'))

def importBaseCapture(importpath: str = None):
    return(pd.read_csv(importpath + 'baseCapture.csv'))

def generateComparison(path: str, returnDF: bool = False):
    baseCapture = importBaseCapture(path)
    inoCapture = importInoCapture(path)
    baseCapture = baseCapture.truncate(after=(len(inoCapture)-1))
    baseCapture = baseCapture.join(inoCapture)
    if returnDF == True:
        return(baseCapture)
    else:
        baseCapture.to_csv(path + 'compareCaptures.csv', index=False)
        print(f'Comparison generated successfully at: {path}compareCaptures.csv')

def probaToList(probas: np.ndarray) -> list:
    amountScores = len(probas[0])
    listOfScores = []

    for i in range(amountScores):
        templist = []
        for j in list(probas):
            templist.append(j[i])
        listOfScores.append(templist)

    return(listOfScores)