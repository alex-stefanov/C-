#include <iostream>

int main() {
    double budget, price_per_person;
    int peopleCount;

    std::cin >> budget >> peopleCount >> price_per_person;

    double totalPrice = price_per_person * peopleCount;

    if (peopleCount > 150) {
        totalPrice = totalPrice * 0.9;
    }

    totalPrice += budget * 0.1;

    std::cout.precision(2);
    std::cout.setf(std::ios::fixed);

    if (totalPrice > budget) {
        std::cout << "Not enough money!" << std::endl;
        std::cout << "Wingard needs " << totalPrice - budget << " leva more." << std::endl;
    }else {
        std::cout << "Action!" << std::endl;
        std::cout << "Wingard starts filming with " << budget - totalPrice << " leva left." << std::endl;
    }

    return 0;
}