#include <iostream>

int main() {
    const double DOG_FOOD_PRICE = 2.5;
    const double CAT_FOOD_PRICE = 4;

    double dogFoodQuantity, catFoodQuantity;

    std::cin >> dogFoodQuantity >> catFoodQuantity;

    std::cout << dogFoodQuantity * DOG_FOOD_PRICE + catFoodQuantity * CAT_FOOD_PRICE
        << " lv." << std::endl;

    return 0;
}