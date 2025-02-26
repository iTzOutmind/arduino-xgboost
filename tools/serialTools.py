import serial
import time
from pandas import DataFrame


def genArrayList(data: DataFrame, length: int, start: int = 0) -> list:
    """
    Generate a list of lists, where each sublist is a row from the input DataFrame.

    Parameters
    ----------
    data : DataFrame
        The input DataFrame.
    length : int
        The number of rows to include in the output list.
    start : int, optional
        The starting index of the rows to include in the output list. The default is 0.

    Returns
    -------
    list
        A list of lists, where each sublist is a row from the input DataFrame.
    """
    arrayList = []
    for i in range(start, start+length):
        arrayList.append(list(data.iloc[i]))
    return arrayList

def sendList(comport, baudrate, arraylist: list, numClasses: int = 0, csvPath: str = None):
    # Generate names for each class
    """
    Send a list of lists over a serial connection to an Arduino.

    Parameters
    ----------
    comport : str
        The serial port to use.
    baudrate : int
        The baudrate to use.
    arraylist : list
        The list of lists to send.
    numClasses : int, optional
        The number of classes to generate headers for. The default is 0.
    csvPath : str, optional
        The path to write the CSV file to. The default is None.

    Returns
    -------
    None
    """
    classnames = ''
    for i in range(numClasses-1):
        classnames += ('Score_' + str(i) + ',')
    classnames += ('Score' + str(numClasses-1))

    if csvPath != None:
        with open(csvPath + 'inoCapture.csv', 'w') as f:
            f.write(classnames + '\n')
        print(f'Arduino Capture created successfully at: {csvPath}inoCapture.csv')
    
    elif numClasses != 0:
        print(classnames)

    for i in arraylist:
        sendArray(comport, baudrate, i, csvPath)
        
def sendArray(comport, baudrate, array, csvPath: str = None):
    """
    Send a single list of values over a serial connection to an Arduino.

    Parameters
    ----------
    comport : str
        The serial port to use.
    baudrate : int
        The baudrate to use.
    array : array-like
        The array of values to send.
    csvPath : str, optional
        The path to write the CSV file to. The default is None.

    Returns
    -------
    None
    """
    ser = serial.Serial(comport, baudrate, timeout=0.1)
    for item in array:
        message = str(item) + ' '
        writeSerial(ser, message)
    readSerial(ser, csvPath)

def writeSerial(ser, message: str):
    ser.write(bytes(message, 'utf-8'))

def readSerial(ser, csvPath: str = None, timeout: int = 5):
    """
    Read data from a serial connection and print or write it to a CSV file.

    Parameters
    ----------
    ser : serial.Serial
        The serial connection to read from.
    csvPath : str, optional
        The path to write the CSV file to. The default is None.
    timeout : int, optional
        The timeout in seconds for the serial connection. The default is 5.

    Returns
    -------
    None
    """
    start = time.time()
    while True:
        data = ser.readline().decode()
        if data:
            if csvPath != None:
                with open(csvPath + 'inoCapture.csv', 'a') as f:
                    f.write(data + '\n')
            else:
                print(data)
            break
        end = time.time()
        if end - start > timeout:
            print("Timeout!")
            break