#include <iomanip>
#include <iostream>

int main() {
    const double CENTIMETERS_TO_INCHES_RATIO = 2.54;

    double inches;

    std::cin >> inches;

    std::cout << inches * CENTIMETERS_TO_INCHES_RATIO;

    return 0;
}
