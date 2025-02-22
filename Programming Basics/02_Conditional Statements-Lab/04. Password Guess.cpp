#include <iostream>

int main() {
    std::string const CORRECT_PASSWORD = "s3cr3t!P@ssw0rd";
    std::string password;

    std::cin >> password;

    if (password == CORRECT_PASSWORD) {
        std::cout << "Welcome" << std::endl;
    }else {
        std::cout << "Wrong password!" << std::endl;
    }

    return 0;
}
