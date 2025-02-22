#include <iostream>

int main() {
    double first, second;
    std::cin >> first >> second;

    if (first >= second) {
        std::cout << first << std::endl;
    }else{
        std::cout << second << std::endl;
    }

    return 0;
}
