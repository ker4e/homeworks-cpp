#include <iostream>#include <iostream>

int main() {
    const int size = 10;
    int numbers[size] = {5, 12, 3, 9, 21, 7, 15, 1, 18, 10};

    std::cout << "Array before sorting:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << ' ';
    }
    std::cout << "\n";

    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (numbers[j] < numbers[j + 1]) { 
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    std::cout << "\nArray after reverse bubble sort:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << ' ';
    }
    std::cout << "\n";

    return 0;
}
