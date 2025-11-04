#include <iostream>

int main() {
    const int rows{3};
    const int columns{6};

    int integers[rows][columns] = {
        {3, 6, 9, 10, 4, 7},
        {10, 56, 43, 21, 45, 44},
        {67, 3, 89, 9, 3, 9}
    };

    int min = integers[0][0];
    int max = integers[0][0];
    int minRow{}, minColumn{};
    int maxRow{}, maxColumn{};

    std::cout << "Massive:\n";
    for (int row = 0; row < rows; ++row) {
        for (int column = 0; column < columns; ++column) {
            std::cout << integers[row][column] << '\t';

            if (integers[row][column] < min) {
                min = integers[row][column];
                minRow = row;
                minColumn = column;
            }

            if (integers[row][column] > max) {
                max = integers[row][column];
                maxRow = row;
                maxColumn = column;
            }
        }
        std::cout << std::endl;
    }

    std::cout << "\nIndex of the minimal element: [" << minRow << "][" << minColumn << "]" << std::endl;
    std::cout << "Index of the maximal element: [" << maxRow << "][" << maxColumn << "]" << std::endl;

    return 0;
}
