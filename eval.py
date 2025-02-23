from sklearn import metrics
import matplotlib.pyplot as pyplot
from xgboost import XGBClassifier
from pandas import DataFrame

def ConfusionMatrix(model: XGBClassifier, xtest: DataFrame, ytest: DataFrame):
    """
    Plot the confusion matrix for the given model.

    Parameters:
    model (XGBClassifier): The model to plot the confusion matrix from.
    xtest (array-like): The test data.
    ytest (array-like): The test labels.

    Returns:
    None
    """
    metrics.ConfusionMatrixDisplay.from_estimator(model, xtest, ytest, cmap='Blues')
    pyplot.show()

def LossCurves(model: XGBClassifier):          
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

def ClassReport(ytest: DataFrame, yhat, precision: int=4):
    """
    Print a classification report for the given true and predicted labels.

    Parameters:
    ytest (array-like): The true labels.
    yhat (array-like): The predicted labels.
    precision (int): The number of decimal places to round each score to.
                    Default is 4.

    Returns:
    None
    """
    print(metrics.classification_report(ytest, yhat, digits = precision))

def SummaryStatistics(df: DataFrame):
    """
    Prints the statistical summary for each column in the given dataframe.
    
    Parameters:
    df (pandas.DataFrame): The dataframe to generate the summary statistics for.
    
    Returns:
    None
    """
    dfCols = df.columns.to_list()
    for col in dfCols:
        print(f"Column: {col} \n{df[col].describe()} \nData Type: {df[col].dtype}\n")

def printMisc(model: XGBClassifier, bestIter: int, ytest: DataFrame, yhat: DataFrame):
    """
    Print miscellaneous evaluation metrics for the given model.
    Not intended for use!

    Parameters:
    model (XGBClassifier): The trained model used for evaluation.
    bestIter (int): The best iteration or number of trees determined during training.
    ytest (array-like): The true labels for the test data.
    yhat (array-like): The predicted labels from the model.

    Returns:
    None
    """

    print(f'# Trees / Best Iteration: \t{bestIter}')
    print(f'Test Accuracy: \t{metrics.accuracy_score(ytest, yhat)}')
    print(f'Base_Score{model.base_score}')
    print(f'\nPredict_Proba Return: \n{model.predict_proba(xtest)}')
