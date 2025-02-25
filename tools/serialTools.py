import serial
import time


def genArrayList(data: 'DataFrame', length: int, start: int = 0) -> list:
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

def sendList(arraylist: list, numClasses: int = 0, csvPath: str = None):
    # Generate names for each class
    classnames = ''
    for i in range(numClasses-1):
        classnames += ('Score_' + str(i) + ',')
    classnames += ('Score' + str(numClasses-1))

    if csvPath != None:
        with open(csvPath + 'inoCapture.csv', 'w') as f:
            f.write(classnames + '\n')
    elif numClasses != 0:
        print(classnames)

    for i in arraylist:
        sendArray(i, csvPath)
    
    if csvPath != None:
        print(f'Arduino Capture created successfully at: {csvPath}inoCapture.csv')

def sendArray(array, csvPath: str = None):
    output = ''
    for i in array:
        (output.join(str(i)).replace(',',''))
    output += ' '
    writeSerial('/dev/ttyACM0', 115200, output, csvPath)

def addToStr(ziel: str, eingabe: str):
    ziel = ziel + eingabe + ' '
    return ziel
    
def writeSerial(comport: str, baudrate: int, string: str='Hello World!', csvPath: str = None, timeout: float=0.1):
    ser = serial.Serial(comport, baudrate, timeout=0.1)

    ser.write(bytes(string, 'utf-8'))
    readSerial(comport, baudrate, csvPath)

def readSerial(comport: str, baudrate: int, csvPath: str = None):
    ser = serial.Serial(comport, baudrate, timeout=0.1)

    if csvPath:
        with open(csvPath + 'inoCapture.csv', 'a') as f:
            while True:
                data = ser.readline().decode().strip()
                if data:
                    f.write(data + '\n')
                    break
    else:
        while True:
            data = ser.readline().decode().strip()
            if data:
                print(data)
                break