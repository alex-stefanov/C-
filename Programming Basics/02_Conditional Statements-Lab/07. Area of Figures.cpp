#include <iostream>
#include <cmath>

int main() {
    std::string figureType;
    std::cin >> figureType;

    std::cout.precision(3);
    std::cout.setf(std::ios::fixed);

    if (figureType == "square") {
        double a;
        std::cin >> a;
        std::cout << a * a << std::endl;

    }else if (figureType == "rectangle") {
        double a, b;
        std::cin >> a >> b;
        std::cout << a * b << std::endl;
    }else if (figureType == "circle") {
        double r;
        std::cin >> r;
        std::cout << M_PI * r * r << std::endl;
    }else if (figureType == "triangle") {
        double c, hc;
        std::cin >> c >> hc;

        std::cout << c * hc / 2 << std::endl;
    }

    return 0;
}