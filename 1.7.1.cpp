#include <iostream>

int main() 
{

	int variable{10};
	short variable2{5};
	long variable3{1000};
	long long variable4{73811};
	float variable5{10.5f};
	double variable6{5.15};
	long double variable7{78.684};
	bool variable8{ true };

	std::cout << "Int:     " << variable << '\t' << &variable << '\t' << sizeof(variable) << std::endl;
	std::cout << "Short:       " << variable2 << '\t' << &variable2 << '\t' << sizeof(variable2) << std::endl;
	std::cout << "Long:        " << variable3 << '\t' << &variable3 << '\t' << sizeof(variable3) << std::endl;
	std::cout << "Long long:   " << variable4 << '\t' << &variable4 << '\t' << sizeof(variable4) << std::endl;
	std::cout << "Float:       " << variable5 << '\t' << &variable5 << '\t' << sizeof(variable5) << std::endl;
	std::cout << "Double:      " << variable6 << '\t' << &variable6 << '\t' << sizeof(variable6) << std::endl;
	std::cout << "Long double: " << variable7 << '\t' << &variable7 << '\t' << sizeof(variable7) << std::endl;
	std::cout << "Bool:        " << variable8 << '\t' << &variable8 << '\t' << sizeof(variable8) << std::endl;

	return 0;
}
