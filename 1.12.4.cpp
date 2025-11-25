#include <iostream>
#include <fstream>

int** createTwoDinArray(int rows, int columns);
void reverseTwoDinArray(int** matrix, int rows, int columns);
void printTwoDinArray(int** matrix, int rows, int columns);
void deleteTwoDinArray(int** matrix, int rows);

int main()
{
	std::ofstream ofile{ "in.txt" };
	if (ofile.is_open()) {
		ofile << "3 4" << std::endl;
		ofile << "17 9 4 6" << std::endl;
		ofile << "1 36 5 3" << std::endl;
		ofile << "4 7 8 47" << std::endl;
		ofile << "9 5 25 5" << std::endl;
	}
	ofile.close();

	std::ifstream ifile{ "in.txt" };
	if (ifile.is_open()){
		int rows{};
		int columns{};

		ifile >> rows;
		ifile >> columns;
		
		int** matrix{ createTwoDinArray(rows, columns) };

		for (int row{}; row < rows; row++) {
			for (int column{}; column < columns; ++column) {
				ifile >> matrix[row][column];
			}
		}
		
		reverseTwoDinArray(matrix, rows, columns);
		printTwoDinArray(matrix, rows, columns);
		deleteTwoDinArray(matrix, rows);
	}
	ifile.close();

	return EXIT_SUCCESS;
}

int** createTwoDinArray(int rows, int columns) {
	int** integers{ new int* [rows] };
	for (int row{}; row < rows; ++row) {
		integers[row] = new int[columns] {};
	}
	return integers;
}

void reverseTwoDinArray(int** matrix, int rows, int columns) {
	for (int row{}; row < rows; ++row) {
		for (int column{}; column < columns/2; ++column) {
			int temp = matrix[row][column];
			matrix[row][column] = matrix[row][columns - column - 1];
			matrix[row][columns - column - 1] = temp;
		}
	}
}

void printTwoDinArray(int** matrix, int rows, int columns) {
	for (int row{}; row < rows; ++row) {
		for (int column{}; column < columns; ++column) {
			std::cout << matrix[row][column] << '\t';
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void deleteTwoDinArray(int** matrix, int rows) {
	for (int row{}; row < rows; ++row) {
		delete[] matrix[row];
	}
	delete[] matrix;
}
