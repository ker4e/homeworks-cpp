#include <iostream>

int main() {
    int number{};
    int sum{0};

    do {
        std::cout << "Enter an integer or '0' to finish: ";
        std::cin >> number;

        sum += number;
    } while (number != 0);

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}


