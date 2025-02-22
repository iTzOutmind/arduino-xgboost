import serial

def readserialUnlimited(comport, baudrate):

    ser = serial.Serial(comport, baudrate, timeout=0.1)         # 1/timeout is the frequency at which the port is read

    while True:
        data = ser.readline().decode().strip()
        if data:
            print(data)
            if data == '##### REPEATING... #####':
                break

def readserial(comport, baudrate):
    ser = serial.Serial(comport, baudrate, timeout=0.1)         # 1/timeout is the frequency at which the port is read

    while True:
        data = ser.readline().decode().strip()

        if data == '##### REPEATING... #####':
            printData(ser)
            break

def printData(ser):
    data = ser.readline().decode().strip()
    while data != '##### REPEATING... #####':
        data = ser.readline().decode().strip()

        if data and data != '##### REPEATING... #####':
            print(data)

def printCSV(comport, baudrate):
    ser = serial.Serial(comport, baudrate, timeout=0.1)         # 1/timeout is the frequency at which the port is read

    