#include <iostream>

double* createArrayFillPrint(int size);

int main() {
	int size{};
	std::cout << "Enter the array size: ";
	std::cin >> size;
	double* array{ createArrayFillPrint(size) };
	
	delete[] array;
	return 0;
}

double* createArrayFillPrint(int size) {
	double* arr = new double[size] {};
	std::cout << "Array: ";
	for (int element{}; element < size; ++element) {
		std::cout << arr[element] << ' ';
	}
	std::cout << std::endl;

	return arr;
}
