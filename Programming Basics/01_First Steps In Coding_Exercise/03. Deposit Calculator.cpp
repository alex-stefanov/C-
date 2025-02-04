#include <iostream>

int main() {
    double interestAmount, annualInterestRate;
    int period;

    std::cin >> interestAmount >> period >> annualInterestRate;

    std::cout << interestAmount + period * ((interestAmount * annualInterestRate/100) / 12) << std::endl;

    return 0;
}