import serial

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

def sendList(arraylist: list, toCSV: bool = False, numClasses: int = 2):
    classnames = ''
    for i in range(numClasses-1):
        classnames += ('Score_' + str(i) + ',')
    classnames += ('Score' + str(numClasses-1))

    if toCSV:
        with open('inoCapture.csv', 'w') as f:
            f.write(classnames + '\n')

    for i in arraylist:
        sendArray(i, toCSV)

def sendArray(array, toCSV: bool = False):
    print(f'sendArray toCSV = {toCSV}')
    output = ''
    array = [str(i) for i in array]
    [addToStr(output, i) for i in array]
    for i in array:
        output = addToStr(output, i)
    writeSerial('/dev/ttyACM0', 115200, output, toCSV)

def addToStr(ziel: str, eingabe: str):
    ziel = ziel + eingabe + ' '
    return ziel
    
def writeSerial(comport: str, baudrate: int, string: str='Hello World!', toCSV: bool = False, timeout: float=0.1):
    ser = serial.Serial(comport, baudrate, timeout=0.1)

    print(f'writeSerial toCSV = {toCSV}')

    ser.write(bytes(string, 'utf-8'))
    readSerial(comport, baudrate, toCSV)

def readSerial(comport: str, baudrate: int, toCSV: bool = False):
    ser = serial.Serial(comport, baudrate, timeout=0.1)
    print(f'readSerial toCSV = {toCSV}')
    if toCSV:
        with open('inoCapture.csv', 'a') as f:
            while True:
                data = ser.readline().decode().strip()
                if data:
                    f.write(data + '\n')
                    print('Writing!')
                    break
    else:
        while True:
            data = ser.readline().decode().strip()
            if data:
                print(data)
                break