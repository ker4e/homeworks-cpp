#include <iostream>
#include <fstream>


int main() {
	setlocale(LC_ALL, "Russian");

	std::ofstream ofile("in.txt");
	if (ofile.is_open()) {
		ofile << "Картошка капуста" << std::endl;
		ofile << "Малина клубника черешня" << '\n';
		ofile << "Яблоко груша апельсин";
	}
	ofile.close();

	std::ifstream ifile("in.txt");
	if (ifile.is_open()) {
		std::string data{};
		while (ifile >> data) {
			std::cout << data << std::endl;
		}
	}
	ifile.close();

	return EXIT_SUCCESS;
}
