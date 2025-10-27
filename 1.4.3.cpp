#include <iostream>

int main() {
    int integer{};
    std::cout << "Enter an integer: ";
    std::cin >> integer;

    if (integer < 0) {
        integer = -integer;
    }

    for (int multiplier{1}; multiplier <= 10; multiplier++) {
        int result = integer * multiplier;
        std::cout << integer << " * " << multiplier << " = " << result << std::endl;
    }

    return 0;
}

  
