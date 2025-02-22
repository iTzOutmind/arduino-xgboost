# Copies Arduino Sketches either from Windows folder to 
# WSL Project Diror from WSL Project Dir to Windows folder

import shutil

src = '/mnt/t/Denis/Uni/Bachelorthesis/Arduino Sketches'
dest = '/home/denis/arduino-xgboost/arduino_sketches'

def importSketches():
    shutil.copytree(src,dest,dirs_exist_ok = True)
    print('Copied Sketches from Windows to WSL Project Dir')

def exportSketches():
    shutil.copytree(src,dest,dirs_exist_ok = True)
    print('Copied Sketches from WSL Project Dir to Windows')

# importSketches()
# exportSketches()