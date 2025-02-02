#include <iostream>

int main() {
    const double SHOES_PRICE_PERCENTAGE = 0.40;
    const double CLOTHES_PRICE_PERCENTAGE = 0.20;
    const double BALL_PRICE_PERCENTAGE = 0.25;
    const double ACCESSSORIES_PRICE_PERCENTAGE = 0.20;

    double yearlyPrice;

    std::cin >> yearlyPrice;

    double shoePrice = (1-SHOES_PRICE_PERCENTAGE) * yearlyPrice;
    double clothesPrice = (1-CLOTHES_PRICE_PERCENTAGE) * shoePrice;
    double ballPrice = BALL_PRICE_PERCENTAGE * clothesPrice;
    double accessoriesPrice = ACCESSSORIES_PRICE_PERCENTAGE * ballPrice;

    std::cout << yearlyPrice + shoePrice + clothesPrice + ballPrice + accessoriesPrice << std::endl;

    return 0;
}