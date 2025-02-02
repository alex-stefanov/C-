#include <iostream>

int main() {
    const double PROTECTIVE_NYLON_PRICE_PER_SQUARE_METER = 1.50;
    const double PAINT_PRICE_PER_LITER = 14.50;
    const double PAINT_THINNER_PRICE_PER_LITER = 5;
    const double ADDITIONAL_PAINT_PERCENTAGE = 0.10;
    const int ADDITIONAL_PROTECTIVE_NYLON_IN_SQUARE_METERS = 2;
    const double ADDITIONAL_PRICE_FOR_PLASTIC_BAGS = 0.40;
    const double WORKERS_PRICE_PERCENTAGE_PER_HOUR = 0.30;

    double neededNylonInSquareMeters, neededPaintInLiters, neededPaintThinnerInLiters;
    int workingHours;

    std::cin >> neededNylonInSquareMeters >> neededPaintInLiters
        >> neededPaintThinnerInLiters >> workingHours;

    double totalNylon = (neededNylonInSquareMeters+ADDITIONAL_PROTECTIVE_NYLON_IN_SQUARE_METERS) * PROTECTIVE_NYLON_PRICE_PER_SQUARE_METER;
    double totalPaint = (1 + ADDITIONAL_PAINT_PERCENTAGE) * neededPaintInLiters * PAINT_PRICE_PER_LITER;
    double totalPaintThinner = neededPaintThinnerInLiters * PAINT_THINNER_PRICE_PER_LITER;
    double total = totalNylon + totalPaint + totalPaintThinner + ADDITIONAL_PRICE_FOR_PLASTIC_BAGS;

    double workersPayment = total * WORKERS_PRICE_PERCENTAGE_PER_HOUR * workingHours;

    std::cout << total+workersPayment << std::endl;
    return 0;
}