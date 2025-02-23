import serial

x_0 = {-0.623154, 3.131787, 11.257041, -0.736, -0.059642, 0.56997}
x_1 = {1.366808, 2.376458, 11.491304, -0.219388, 0.297717, -0.341959}
x_2 = {-0.931214, 1.462459, 9.501641, 0.435188, 0.209586, 0.465394}
x_3 = {0.209265, 2.590363, 12.200529, 0.147434, -0.108728, -0.057775}
x_4 = {-0.111518, 1.748065, 8.976833, 0.754365, 0.03308, -0.407495}

def addToStr(ziel, eingabe):
    ziel = ziel + eingabe + ' '
    return ziel

def sendArray(array):
    output = ''
    array = [str(i) for i in array]
    [addToStr(output, i) for i in array]
    for i in array:
        output = addToStr(output, i)
    writeSerial('/dev/ttyACM0', 115200, output)
    
def writeSerial(comport: str, baudrate: int, string: str='Hello World!', timeout: float=0.1):
    ser = serial.Serial(comport, baudrate, timeout=0.1)

    ser.write(bytes(string, 'utf-8'))
    readSerial(comport, baudrate)

def readSerial(comport: str, baudrate: int):
    ser = serial.Serial(comport, baudrate, timeout=0.1)

    while True:
        data = ser.readline().decode().strip()
        if data:
            print(data)
            break

sendArray(x_0)
sendArray(x_1)
sendArray(x_2)
sendArray(x_3)
sendArray(x_4)