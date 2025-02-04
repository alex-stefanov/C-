#include <iostream>

int main() {
    const double USD_TO_BGN_EXCANGE_RATE = 1.79549;

    double usd;

    std::cin >> usd;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    std::cout << usd * USD_TO_BGN_EXCANGE_RATE << std::endl;

    return 0;
}