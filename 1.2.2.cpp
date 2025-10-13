#include <iostream>
#include <string>

int main() {
    std::string input{};
    std::cout << "Enter your string or word:\n";
    std::getline(std::cin >> std::ws, input);
    std::cout << "You entered the following: " << input << std::endl;

    return 0;
}

/*#include <iostream>
#include <string>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    std::string input{};
    std::cout << "Введите слово или словосочетание:\n";
    std::getline(std::cin >> std::ws, input);
    std::cout << "Вы ввели: " << input << std::endl;

    return 0;
}
*/
