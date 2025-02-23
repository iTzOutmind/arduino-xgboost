from sklearn import metrics
import matplotlib.pyplot as pyplot

def printConfusionMatrix(): # Confusion Matrix
    metrics.ConfusionMatrixDisplay.from_estimator(final, xtest, ytest, cmap='Blues')
    pyplot.show()

def plotLossCurves(evalResults):       # Loss Curves
    # save evaluation results
    # results = final.evals_result()   # Kommt in das Call-Script
    # plot curves
    lossValue = list(evalResults['validation_1'])[0]
    pyplot.plot(evalResults['validation_0'][lossValue], label='train')
    pyplot.plot(evalResults['validation_1'][lossValue], label='train')
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

def printSummaryStatistics(df):   # Prints statistical for each column in the dataframe
    dfCols = df.columns.to_list()
    for col in dfCols:
        print(f"Column: {col} \n{df[col].describe()} \nData Type: {df[col].dtype}\n")