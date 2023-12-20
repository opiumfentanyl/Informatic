from ctypes import*

add = CDLL("./twice_lab.dll")
add.calculateSinusNTimes(100000)
add.calculateSinusNTimes(1000000)
add.calculateSinusNTimes(10000000)
add.calculateSinusNTimes(100000000)