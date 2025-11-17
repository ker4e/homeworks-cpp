#include <iostream>

void print(int* integers, int size);

int main() {
	const int size{ 7 };
	const int sizeTwo{ 4 };
	const int sizeThree{ 5 };

	int integers[size]{ 2, 4, 5, 3, 6, 7, 9 };
	print(integers, size);

	int integersTwo[sizeTwo]{ 2, 5, 7, 1 };
	print(integersTwo, sizeTwo);

	int integersThree[sizeThree]{ 3, 10, 98, 1009, 547 };
	print(integersThree, sizeThree);

	return 0;
}

void print(int* integers, int size) 
{
	for (int counter{}; counter < size; ++counter) 
	{
		std::cout << *(integers + counter) << ' ';
	}
	std::cout << std::endl;
}
