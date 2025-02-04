#include <iostream>

int main() {
    const double PRICE_PER_SQUARE_METER = 7.61;

    const double PERCENTAGE_DISCOUNT = 0.18;

    double squareMeters;

    std::cin >> squareMeters;

    double priceWithoutDiscount = squareMeters * PRICE_PER_SQUARE_METER;

    double discount = priceWithoutDiscount * PERCENTAGE_DISCOUNT;

    std::cout << "The final price is " << priceWithoutDiscount - discount << " lv." << std::endl;
    std::cout << "The discount is " << discount << " lv." << std::endl;
    return 0;
}