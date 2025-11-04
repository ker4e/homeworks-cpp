#include <iostream>

int main() {
    int integers[10] {20, 26, 71, 80, 90, 10, 23, 20, 60, 73};

    for (int row = 0; row < 10; row++) {
        if (row != 9) {
            std::cout << integers[row] << ", ";
        } else {
            std::cout << integers[row];
        }
    }
  
    return 0;
}
