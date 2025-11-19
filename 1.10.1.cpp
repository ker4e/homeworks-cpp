#include <iostream>

int* createArray(int size);
void fillArray(int* array, int size);
void printArray(int* array, int size);
void deleteArray(int* array);

int main() {
	int size{};
	std::cout << "Enter the array size: ";
	std::cin >> size;
	int* array{ createArray(size) };

	fillArray(array, size);
	printArray(array, size);
	deleteArray(array);
	
	return 0;
}

int* createArray(int size) {
	return new int[size] {};
}

void fillArray(int* array, int size) {
	for (int a{}; a < size; ++a) {
		std::cout << "arr [" << a << "] = ";
		std::cin >> array[a];
	}
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
