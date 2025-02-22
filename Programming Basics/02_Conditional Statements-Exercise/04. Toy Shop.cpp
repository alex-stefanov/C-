#include <iostream>

int main() {
    double const PUZZLE_PRICE = 2.60;
    double const DOLL_PRICE = 3.00;
    double const BEAR_PRICE = 4.10;
    double const MINION_PRICE = 8.20;
    double const TRUCK_PRICE = 2.00;

    double tripCount, puzzlesCount, dollsCount, bearsCount, minionsCount, trucksCount;

    std::cin >> tripCount >> puzzlesCount >> dollsCount >> bearsCount >> minionsCount >> trucksCount;

    double totalPrice = puzzlesCount * PUZZLE_PRICE
    + dollsCount * DOLL_PRICE
    + bearsCount * BEAR_PRICE
    + minionsCount * MINION_PRICE
    + trucksCount * TRUCK_PRICE;

    if (puzzlesCount + dollsCount + bearsCount + minionsCount + trucksCount >= 50) {
        totalPrice = totalPrice * 0.75;
    }

    totalPrice = totalPrice * 0.9;

    std::cout.precision(2);
    std::cout.setf(std::ios::fixed);

    if (totalPrice >= tripCount) {
        std::cout << "Yes! " << totalPrice - tripCount << " lv left." << std::endl;
    }else {
        std::cout << "Not enough money! " << tripCount - totalPrice << " lv needed." << std::endl;
    }

    return 0;
}