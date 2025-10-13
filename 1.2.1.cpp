#include <iostream>

int main() {
    int number{};
    std::cout << "Enter your number: ";
    std::cin >> number;
    std::cout << "Number is: " << number << std::endl;

    return 0;
}

//Для русской версии
/* #include <iostream>
#include <windows.h>

int main() {
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number{};
    std::cout << "Введите ваше число: ";
    std::cin >> number; 
    std::cout << "Ваше число: " << number << std::endl;

    return 0;
}
*/
