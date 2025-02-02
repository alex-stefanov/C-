#include <iostream>

int main() {
    const double CHICKEN_MENU_PRICE = 10.35;
    const double FISH_MENU_PRICE = 12.40;
    const double VEGETARIAN_MENU_PRICE = 8.15;
    const double PERCENTAGE_DESSERT_PRICE = 0.20;
    const double DELIVERY_PRICE = 2.50;

    int chickenMenusCount, fishMenusCount, vegetarianMenusCount;

    std::cin >> chickenMenusCount >> fishMenusCount >> vegetarianMenusCount;

    std::cout << (1 + PERCENTAGE_DESSERT_PRICE) * (chickenMenusCount * CHICKEN_MENU_PRICE + fishMenusCount * FISH_MENU_PRICE + vegetarianMenusCount * VEGETARIAN_MENU_PRICE )+ DELIVERY_PRICE;

    return 0;
}