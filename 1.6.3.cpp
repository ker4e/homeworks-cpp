#include <iostream>

int Fibonacci(int integer);

int main() {
    int integer{};
    std::cout << "Enter integer: ";
    std::cin >> integer;

    std::cout << "Fibonacci numbers: ";
    for (int i = 0; i < integer; ++i) {
        std::cout << Fibonacci(i) << ' ';
    }
    std::cout << std::endl;

    return 0;
}

int Fibonacci(int integer) {
    if (integer == 0) {
        return 0;
    }
    if (integer == 1) {
        return 1;
    }
    return Fibonacci(integer - 1) + Fibonacci(integer - 2);
}
