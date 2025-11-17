#include <iostream>

void swap(int* first, int* second);

int main()
{
	int a = 5, b = 8;
	int* pointerA{ &a };
	int* pointerB{ &b };

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(pointerA, pointerB);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return 0;
}

void swap(int* first, int* second) {
	int temp = *first;
	*first = *second;
	*second = temp;
}
