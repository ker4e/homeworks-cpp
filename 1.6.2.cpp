#include <iostream>

void power(int value, int power);

int main() {
    power(5, 2);
    power(3, 3);
    power(4, 4);

    return 0;
}

void power(int value, int power) {
    int result = 1;
    for (int i = 0; i < power; ++i) {
        result *= value;
    }
    std::cout << value << " to the power of " << power << " = " << result << std::endl;
}


