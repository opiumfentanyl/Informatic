import math
import time

def calculateSinusNTimes(n):
    start = time.time()
    for i in range (n):
        res=math.sin(1)
    end = time.time()
    time_taken = float(end)-float(start)
    return time_taken
if __name__ == '__main__':
    print(f'{calculateSinusNTimes(100000)} 100.000 operations')
    print(f'{calculateSinusNTimes(1000000)} 1.000.000 operations')
    print(f'{calculateSinusNTimes(10000000)} 10.000.000 operations')
    print(f'{calculateSinusNTimes(100000000)} 100.000.000 operations')