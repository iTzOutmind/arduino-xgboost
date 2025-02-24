import serial
import time

def writeSerial(comport: str, baudrate: int, string: str='Hello World!', timeout: float=0.1):
    """
    Write a string to the given comport and baudrate, then read the line that is sent back.
    
    Parameters
    ----------
    comport : str
        The comport to write to
    baudrate : int
        The baudrate of the serial connection
    string : str, optional
        The string to write to the comport
    timeout : float, optional
        The timeout in seconds for the serial connection
    
    Returns
    -------
    None
    """
    ser = serial.Serial(comport, baudrate, timeout=0.1)

    ser.write(bytes(string, 'utf-8'))
    readSerial(comport, baudrate)

def readSerial(comport: str, baudrate: int):
    """
    Read a line from the given comport and baudrate, then print the received data.

    Parameters
    ----------
    comport : str
        The comport to read from
    baudrate : int
        The baudrate of the serial connection

    Returns
    -------
    None
    """
    ser = serial.Serial(comport, baudrate, timeout=0.1)

    while True:
        data = ser.readline().decode().strip()
        if data:
            print(data)
            break
            
# writeSerial('/dev/ttyACM0', 115200)