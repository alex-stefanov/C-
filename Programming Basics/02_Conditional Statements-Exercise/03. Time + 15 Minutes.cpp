#include <iostream>

int main() {
    int hours, minutes;
    std::cin >> hours >> minutes;

    int totalInMinutes = hours * 60 + minutes + 15;
    int finalHours = totalInMinutes / 60;
    int finalMinutes = totalInMinutes % 60;

    if (finalHours == 24) {
        finalHours = 0;
    }

    if (finalMinutes < 10){
        std::cout << finalHours << ":0" << finalMinutes << std::endl;
    }else{
        std::cout << finalHours << ':' << finalMinutes << std::endl;
    }

    return 0;
}