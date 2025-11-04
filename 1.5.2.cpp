#include <iostream>

int main() {
    int integers[10] {20, 26, 71, 80, 90, 10, 23, 20, 60, 73};

    std::cout << "Massive: ";
    for (int row = 0; row < 10; ++row) {
        std::cout << integers[row];
        if (row < 9) std::cout << ", ";
    }
    std::cout << std::endl;

    int min = integers[0];
    int max = integers[0];

    for (int row = 1; row < 10; ++row) {
        if (integers[row] < min) {
            min = integers[row];
        }
        if (integers[row] > max) {
            max = integers[row];
        }
    }

    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max << std::endl;

    return 0;
}
