#include <iostream>
#include <string>

int main() {
    std::string gender{}, zodiac{};
    int age{};

    std::cout << "Enter your gender (m/f or male/female): ";
    std::getline(std::cin >> std::ws, gender);

    std::cout << "Enter your zodiac sign: ";
    std::getline(std::cin >> std::ws, zodiac);

    std::cout << "Enter your age: ";
    std::cin >> age;

    if ((gender == "m" ? 1 : (gender == "male" ? 1 : 0)) ? 
        ((zodiac == "cancer" ? 1 : (zodiac == "scorpio" ? 1 : (zodiac == "pisces" ? 1 : 0))) ? 
            (age < 40 ? 1 : 0) 
        : 0) 
    : 0) {
        std::cout << "\nToday is a very productive day. You may achieve what once seemed almost impossible.\n";
    }
    else if ((gender == "f" ? 1 : (gender == "female" ? 1 : 0)) ?
             ((zodiac == "taurus" ? 1 : (zodiac == "virgo" ? 1 : (zodiac == "capricorn" ? 1 : 0))) ?
              ((age >= 15 ? (age <= 30 ? 1 : 0) : 0))
             : 0)
            : 0) {
        std::cout << "\nTonight is perfect for socializing with friends, hosting home parties, or spontaneous gatherings.\n"
                     "It will not only be fun, but also engaging: something exciting will catch everyone's interest.\n";
    }
    else {
        std::cout << "\nYour horoscope is still under development. Come back a little later ;)\n";
    }

    return 0;
}
