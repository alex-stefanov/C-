#include <iostream>

int main() {
    int length, width, height;
    double percentCoveredArea;

    std::cin >> length >> width >> height >> percentCoveredArea;

    std::cout << (1 - percentCoveredArea / 100) * (length * width * height * 0.001) << std::endl;

    return 0;
}