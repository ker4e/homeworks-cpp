#include <iostream> 

void fibonacci(int integer);

int main() {
    int integer{};
    std::cout << "Enter integer: ";
    std::cin >> integer;

    fibonacci(integer);

    return 0;
}

void fibonacci(int integer) {
    unsigned long long first = 0;
    unsigned long long second = 1;

    std::cout << "Fibonacci numbers: ";
    for (int i = 0; i < integer; ++i) {
        std::cout << first << ' ';
        unsigned long long next = first + second;
        first = second;
        second = next;
    }
    std::cout << std::endl;
}





