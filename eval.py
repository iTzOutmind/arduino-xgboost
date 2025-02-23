from sklearn import metrics
import matplotlib.pyplot as pyplot

def printConfusionMatrix(): # Confusion Matrix
    metrics.ConfusionMatrixDisplay.from_estimator(final, xtest, ytest, cmap='Blues')
    pyplot.show()

def plotLossCurves(model):          
    """
    Plot the loss curves from the model's evaluation results.

    Parameters:
    model (XGBClassifier): The model to plot the loss curves from.

    Returns:
    None

    """
    results = model.evals_result()
    names = list(model.evals_result())
    lossValue = list(results[names[0]])[0]
    for i in names:
        pyplot.plot(results[i][lossValue], label=i)
    pyplot.ylabel(lossValue)
    pyplot.xlabel('Iterations')
    pyplot.legend()
    pyplot.show()

def printClassReport():     # Classification Report
    print(metrics.classification_report(ytest, yhat, digits = 3))

def printMisc():            # Best Iter, Test Accuracy, Base Score, Probas,
    # Misc
    print(f'# Trees / Best Iteration: \t{bestIter}')
    print(f'Test Accuracy: \t{accuracy_score(ytest, yhat)}')
    print(f'Base_Score{final.base_score}')
    print(f'\nPredict_Proba Return: \n{final.predict_proba(xtest)}')

def printSummaryStatistics(df):   # Prints statistical for each column in the dataframe
    dfCols = df.columns.to_list()
    for col in dfCols:
        print(f"Column: {col} \n{df[col].describe()} \nData Type: {df[col].dtype}\n")