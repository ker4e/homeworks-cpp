#include <iostream>

namespace add {
	int calc(int x, int y) {
		return x + y;
	}
}

namespace sub {
	int calc(int x, int y) {
		return x - y;
	}
}

namespace multiplication {
	int calc(int x, int y) {
		return x * y;
	}
}

namespace divi {
	int calc(int x, int y) {
		return x / y;
	}
}
		

int main()
{
	int x{ 6 }, y{ 9 };

	std::cout << "x = " << x << '\t' << "y = " << y << std::endl;

	std::cout << "Addition: " << add::calc(x, y) << std::endl;
	std::cout << "Subtraction: " << sub::calc(x, y) << std::endl;
	std::cout << "Multiplication: " << multiplication::calc(x, y) << std::endl;
	std::cout << "Division: " << divi::calc(x, y) << std::endl;
}
