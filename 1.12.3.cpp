#include <iostream>
#include <fstream>
#include <string>

int* createArray(int size);
void fillArray(int* array, int size);
void reverseArray(int* array, int size);
void printArray(int* array, int size);
void deleteArray(int* array);


int main() {
	int size{};
	std::cout << "Enter size of array: ";
	std::cin >> size;
	int* array(createArray(size));
	fillArray(array, size);
	printArray(array, size);
	reverseArray(array, size);

	std::ofstream ofile("out.txt");
	if (ofile.is_open()) {
		ofile << size << std::endl;
		for (int i{}; i < size; ++i) {
			ofile << array[i] << ' ';
		}
	}
	ofile.close();

	std::ifstream ifile("out.txt");
	if (ifile.is_open()) {
		std::string data{};
		std::cout << "Array from out.txt: " << std::endl;
		while (std::getline(ifile >> std::ws, data)) {
			std::cout << data << std::endl;
		}
	}
	ifile.close();
	deleteArray(array);

	return EXIT_SUCCESS;
}

int* createArray(int size) {
	return new int[size];
}

void fillArray(int* array, int size) {
	for (int i{}; i < size; ++i) {
		std::cout << "arr[" << i << "]: ";
		std::cin >> array[i];
	}
	std::cout << std::endl;
}

void reverseArray(int* array, int size) {
	for (int i = 0; i < size / 2; ++i) {
		int temp = array[i];
		array[i] = array[size - 1 - i];
		array[size - 1 - i] = temp;
	}
}

void printArray(int* array, int size) {
	std::cout << "Your array: ";
	for (int a{}; a < size; ++a) {
		std::cout << array[a] << ' ';
	}
	std::cout << std::endl;
}

void deleteArray(int* array) {
	delete[] array;
}
