#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

extern "C" {
double calculateSinusNTimes(int N);
}

double calculateSinusNTimes(int N) {
    clock_t start_time = clock();
    for (int i = 0; i < N; ++i) {
        double result = sin(1);
    }
    clock_t end_time = clock();
    std::cout << double(end_time - start_time) / CLOCKS_PER_SEC << std::endl;
    return 0;
}

