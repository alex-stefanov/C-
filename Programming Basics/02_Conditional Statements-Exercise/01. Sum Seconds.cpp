#include <iostream>

int main() {
    int firstSeconds, secondSeconds, thirdSeconds;
    std::cin >> firstSeconds >> secondSeconds >> thirdSeconds;

    int sum = firstSeconds + secondSeconds + thirdSeconds;

    int minutes = sum / 60;
    int seconds = sum % 60;

    if (seconds < 10) {
        std::cout << minutes << ":0" << seconds << std::endl;
    }
    else {
        std::cout << minutes << ':' << seconds << std::endl;
    }

    return 0;
}
