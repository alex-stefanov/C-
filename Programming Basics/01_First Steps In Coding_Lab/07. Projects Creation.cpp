#include <iostream>

int main() {
    const int HOURS_PER_PROJECT = 3;

    std::string name;

    int projectsCount;

    std::cin >> name >> projectsCount;

    std::cout << "The architect " << name << " will need "
        << projectsCount * HOURS_PER_PROJECT << " hours to complete " << projectsCount << " project/s." << std::endl;

    return 0;
}