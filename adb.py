#!/usr/bin/env/python
from sys import argv
import subprocess
import os
import time
import xml.etree.ElementTree as ET

def ajuda():
    ajuda = [
        " ./adb.py [option] [source] [target]",
        " options: ",
        "\t--mobile-to-pc or -mpc:  send file from cellphone to computer",
        "\t--pc-to-mobile or -pcm:  send file from computer to cellphone"
    ]
    for texto in ajuda:
        print(texto)

def DeviceToPC(origem,  destino):
    subprocess.Popen(f'adb pull {origem} {destino}', shell=True, stdout=subprocess.PIPE)

def PcToDevice(origem, destino):
    subprocess.Popen(f'adb push {origem} {destino}', shell=True, stdout=subprocess.PIPE)
    
if __name__ == "__main__":
    try:
        os.system('cd C:\\Users\\mvictor\\Desktop\\scrcpy-win64-v1.24')
        opc1 = argv[1]
        origem = argv[2]
        destino = argv[3]
        if opc1 == '--mobile-to-pc' or opc1 == '-mpc':
            DeviceToPC(origem, destino)
        elif opc1 == '--pc-to-mobile' or opc1 == '-pcm':
            PcToDevice(origem, destino)
        elif opc1 == '--help' or opc1 == '-h':
            ajuda()
    except:
        ajuda()
    
