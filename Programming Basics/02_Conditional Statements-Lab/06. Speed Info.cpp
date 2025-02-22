#include <iostream>

int main() {
    double const MaxSlowSpeed = 10.0;
    double const MaxAverageSpeed = 50.0;
    double const MaxFastSpeed = 150.0;
    double const MaxUltraFastSpeed = 1000.0;

    double speed;

    std::cin >> speed;

    if (speed <= MaxSlowSpeed) {
        std::cout << "slow" << std::endl;
    }else if (speed <= MaxAverageSpeed) {
        std::cout << "average" << std::endl;
    }else if (speed <= MaxFastSpeed) {
        std::cout << "fast" << std::endl;
    }else if (speed <= MaxUltraFastSpeed) {
        std::cout << "ultra fast" << std::endl;
    }else {
        std::cout << "extremely fast" << std::endl;
    }

    return 0;
}
