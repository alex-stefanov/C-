#include <iostream>

int main() {

    int pagesCount, pages, daysCount;

    std::cin >> pagesCount >> pages >> daysCount;

    std::cout << pagesCount / pages / daysCount << std::endl;

    return 0;
}