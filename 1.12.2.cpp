#include <iostream>
#include <fstream>

int* createArray(int size);
void deleteArray(int* array);
void printArray(int* array, int size);

int main() {
	setlocale(LC_ALL, "Russian");

	std::ofstream ofile("in.txt");
	if (ofile.is_open()) {
		ofile << "10" << std::endl;
		ofile << "0 1 2 3 4 5 6 7 8 9";
	}
	ofile.close();

	std::ifstream ifile("in.txt");
	if (ifile.is_open()) {
		int size{};
		ifile >> size;
		int* array{ createArray(size) };
		for (int i{ size - 1 }; i >= 0; --i)
		{
			ifile >> array[i];
		}
		printArray(array, size);
		deleteArray(array);

	}
	ifile.close();

	return EXIT_SUCCESS;
}

int* createArray(int size) {
	return new int[size];
}

void printArray(int* array, int size) {
	std::cout << "Your array: ";
	for (int a{}; a < size; ++a) {
		std::cout << array[a] << ' ';
	}
}

void deleteArray(int* array) {
	delete[] array;
}
