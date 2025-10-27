#include <iostream>

int main() {
    int number{};
    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number < 0) {
        number = -number;
    }

    for (int multiplier{1}; multiplier <= 10; multiplier++) {
        int result = number * multiplier;
        std::cout << number << " * " << multiplier << " = " << result << std::endl;
    }

    return 0;
}

  
