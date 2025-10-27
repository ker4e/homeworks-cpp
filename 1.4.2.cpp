#include <iostream>

int main() {
    int number{};
    std::cout << "Enter an integer: ";
    std::cin >> number;

    int sum{0};

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        sum += number % 10;
        number /= 10;    
    }

    std::cout << "Sum of digits: " << sum << std::endl;

    return 0;
}


