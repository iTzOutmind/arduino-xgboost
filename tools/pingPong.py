import serial
import time

def sendList(comport, baudrate, arraylist: list, numClasses: int = 0, csvPath: str = None):
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
        sendArray(comport, baudrate, i, csvPath)
    
    if csvPath != None:
        print(f'Arduino Capture created successfully at: {csvPath}inoCapture.csv')

def sendArray(comport, baudrate, array, csvPath: str = None):
    ser = serial.Serial(comport, baudrate, timeout=0.1)
    for item in array:
        message = str(item) + ' '
        writeSerial(ser, message)
    readSerial(ser, csvPath)

def writeSerial(ser, message: str):
    ser.write(bytes(message, 'utf-8'))

def readSerial(ser, csvPath: str = None):
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
        if end - start > 5:
            print("Timeout!")
            break

def pingPong(comport, baudrate, timeout=0.1):
    ser = serial.Serial(comport, baudrate, timeout=0.1)
    # while True:
    for x in range(100):
        for i in range(19):
            writeSerial(ser, '420.6969 ')
        readSerial(ser)
        print() 

# pingPong('/dev/ttyACM0', 9600)

a =[73.0, 0.0, 1.0, 1.0, 0.0, 35.67, 0.0, 0.0, 241.3, 144.0, 127.0, 0.0, 2.0, 1.0, 2.0, 0.0, 1.0, 1.0, 175.0]
b = [82.0, 0.0, 0.0, 1.0, 1.0, 24.59, 1.0, 0.0, 174.4, 131.0, 73.0, 1.0, 2.0, 2.0, 0.0, 0.0, 2.0, 0.0, 160.0]

list = [a,b,a,b,a,b,a,b]

sendList('/dev/ttyACM0', 9600, list, 3, '')

# for i in range(1000):
#     sendArray('/dev/ttyACM0', 9600, a)