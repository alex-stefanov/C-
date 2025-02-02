#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES

int main() {

    double radians;

    std::cin >> radians;

    std::cout << round(radians * 180 / M_PI) << std::endl;

    return 0;
}