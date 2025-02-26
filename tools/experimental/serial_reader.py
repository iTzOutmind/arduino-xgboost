import serial

gyro = '/home/denis/arduino-xgboost/datasets/gyro/'
har = '/home/denis/arduino-xgboost/datasets/har/'
harus = '/home/denis/arduino-xgboost/datasets/harus/'

def readserial(comport, baudrate, csv, project = ''):
    ser = serial.Serial(comport, baudrate, timeout=0.1)         # 1/timeout is the frequency at which the port is read

    while True:
        data = ser.readline().decode().strip()

        if data == '##### REPEATING... #####':  # Listen for '##### REPEATING... #####'
            if csv == True:
                printCSV(ser, project)
            else:
                printData(ser)
            break

def printData(ser):                             # Prints every Serial Output until it reads '##### REPEATING... #####'
    data = ser.readline().decode().strip()
    while data != '##### REPEATING... #####':
        data = ser.readline().decode().strip()

        if data and data != '##### REPEATING... #####':
            print(data)

def printCSV(ser, project):
    with open(project + 'inoCapture.csv', 'w') as f:
        data = ser.readline().decode().strip()
        while data != '##### REPEATING... #####':
            data = ser.readline().decode().strip()

            if data and data != '##### REPEATING... #####':
                f.write(data + '\n')

# readserial('/dev/ttyACM0', 115200, True, gyro)