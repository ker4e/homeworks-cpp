#include <iostream>

void swap(int& first, int& second);

int main(int argc, char** argv)
{
	int a = 5, b = 8;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return 0;
}

void swap(int& first, int& second) {
	first = first + second;
	second = first - second;
	first = first - second;
}
