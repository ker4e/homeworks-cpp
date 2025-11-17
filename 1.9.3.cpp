#include <iostream>

void print(int* integers, int size);
void reverse(int* integers, int size);



int main() {
	const int size{ 9 };
	int integers[size]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	std::cout << "Array befour reverse: ";
	print(integers, size);

	reverse(integers, size);

	std::cout << "Array after reverse: ";
	print(integers, size);

	return 0;

}

void print(int* integers, int size) {
	for (int counter{}; counter < size; ++counter) {
		std::cout << integers[counter] << ' ';
	}
	std::cout << std::endl;
}

void reverse(int* integers, int size) {
	for (int counter{}; counter < size / 2; ++counter) {
		int temp = integers[counter];
		integers[counter] = integers[size - 1 - counter];
		integers[size - 1 - counter] = temp;
	}
}
