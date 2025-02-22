#include <iostream>

int main() {
    double const VIDEOCARD_PRICE = 250;

    double budget;
    int videocardCount, CPUCount, RAMCount;

    std::cin >> budget >> videocardCount >> CPUCount >> RAMCount;

    double totalVideocardPrice = videocardCount * VIDEOCARD_PRICE;
    double totalCPUPrice = (totalVideocardPrice * 0.35) * CPUCount;
    double totalRAMPrice = (totalVideocardPrice * 0.1) * RAMCount;

    double total = totalVideocardPrice + totalCPUPrice + totalRAMPrice;

    if (videocardCount > CPUCount) {
        total = total * 0.85;
    }

    std::cout.precision(2);
    std::cout.setf(std::ios::fixed);

    if (total <= budget) {
        std::cout << "You have " << budget - total << " leva left!" << std::endl;
    }else {
        std::cout << "Not enough money! You need " << total - budget << " leva more!" << std::endl;
    }

    return 0;
}