#include <iostream>

int main() {
    const double PRICE_PENCILS = 5.80;
    const double PRICE_MARKERS = 7.20;
    const double PRICE_SOLUTION_PER_LITER = 1.20;

    int pencilsCount, markersCount, litersSolution;
    double priceDiscountPercentage;

    std::cin >> pencilsCount >> markersCount >> litersSolution >> priceDiscountPercentage;

    std::cout
        << (1 - priceDiscountPercentage / 100) * (pencilsCount * PRICE_PENCILS + markersCount * PRICE_MARKERS + litersSolution * PRICE_SOLUTION_PER_LITER) << std::endl;

    return 0;
}