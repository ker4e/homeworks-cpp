#include <iostream>

int main() {
    const int size = 10;
    int numbers[size] = {5, 12, 3, 9, 21, 7, 15, 1, 18, 10};

    std::cout << "Array before sorting:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << ' ';
    }
    std::cout << "\n";

    bool swapped; 
    int temp;

    do {
        swapped = false; 

        for (int i = size - 1; i > 0; --i) { 
            if (numbers[i] < numbers[i - 1]) { 
                temp = numbers[i];
                numbers[i] = numbers[i - 1];
                numbers[i - 1] = temp;
                swapped = true; 
            }
        }

    } while (swapped); 

    std::cout << "\nArray after reverse bubble sort:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << ' ';
    }
    std::cout << "\n";

    return 0;
}
