#include <iostream>
#include <cmath>

int main() {
    std::string serialName;
    int durationInMinutes, lunchBreakInMinutes;

    std::getline(std::cin, serialName);
    std::cin >> durationInMinutes >> lunchBreakInMinutes;

    double eatTimeInMinutes = lunchBreakInMinutes * 0.125;
    double restTimeInMinutes = lunchBreakInMinutes * 0.25;

    double finalTimeInMinutes = lunchBreakInMinutes - eatTimeInMinutes - restTimeInMinutes;

    if (finalTimeInMinutes >= durationInMinutes) {
        std::cout << "You have enough time to watch " << serialName << " and left with " << std::ceil(finalTimeInMinutes - durationInMinutes) << " minutes free time." << std::endl;

    }else {
        std::cout << "You don't have enough time to watch " << serialName << ", you need " << std::ceil(durationInMinutes - finalTimeInMinutes) << " more minutes." << std::endl;
    }

    return 0;
}