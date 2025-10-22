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

    if ((gender == "m" || gender == "male") &&
        (zodiac == "cancer" || zodiac == "scorpio" || zodiac == "pisces") &&
        age < 40)
    {
        std::cout << "\nToday is a very productive day. You may achieve what once seemed almost impossible.\n";
    }
    else if ((gender == "f" || gender == "female") &&
             (zodiac == "taurus" || zodiac == "virgo" || zodiac == "capricorn") &&
             (age >= 15 && age <= 30))
    {
        std::cout << "\nTonight is perfect for socializing with friends, hosting home parties, or spontaneous gatherings.\n"
                     "It will not only be fun, but also engaging: something exciting will catch everyone's interest.\n";
    }
    else {
        std::cout << "\nYour horoscope is still under development. Come back a little later ;)\n";
    }

    return 0;
}
