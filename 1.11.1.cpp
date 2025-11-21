#include <iostream>
#include <string>

int main() {
	
	std::string name{};
	std::string surname{};
	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
	std::cout << "Enter your surname: ";
	std::getline(std::cin, surname);
	std::string output{ "Hello, " + name + ' ' + surname + "!!!" };
	std::cout << output << std::endl;

	return EXIT_SUCCESS;
}
