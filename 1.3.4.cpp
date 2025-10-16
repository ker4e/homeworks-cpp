#include <iostream>
#include <string>

int main()
{
    int a{}, b{};
    std::cout << "Enter an integer from -100 to 100: ";
    std::cin >> a;
    std::cout << "Enter an integer from -100 to 100: ";
    std::cin >> b;

    if (a < -100 || a > 100 || b < -100 || b > 100) { std::cout << "Error! Number out of range!\n"; return 1; }

    int originalA{a}; int originalB{b};
    std::string aMinus = (a < 0) ? "minus " : "";
    if (a < 0) { a = -a; }

    std::string aText = (a < 20 ? (a==0 ? "zero" : a == 1 ? "one" : a == 2 ? "two" : a == 3 ? "three" : a==4 ? "four" : a == 5 ? "five"
                                                : a == 6 ? "six" : a == 7 ? "seven" : a == 8 ? "eight" : a == 9 ? "nine" : a == 10 ? "ten" 
                                                : a == 11 ? "eleven" : a == 12 ? "twelve" : a == 13 ? "thirteen" : a == 14 ? "fourteen" : a == 15 ? "fifteen" 
                                                : a == 16 ? "sixteen" : a == 17 ? "seventeen" : a == 18 ? "eighteen" : "nineteen") : 
        std::string(a / 10 == 2 ? "twenty" : a / 10 == 3 ? "thirty" : a / 10 == 4 ? "forty" 
        : a / 10 == 5 ? "fifty" : a / 10 == 6 ? "sixty" : a / 10 == 7 ? "seventy" 
        : a / 10 == 8 ? "eighty" : "ninety") + (( a % 10 != 0) ? " " : "") + 
            (a % 10 == 1 ? "one" : a % 10 == 2 ? "two" : a % 10 == 3 ? "three" 
            : a % 10 == 4 ? "four" : a % 10 == 5 ? "five" : a % 10 == 6 ? "six" 
            : a % 10 == 7 ? "seven" : a % 10 == 8 ? "eight" : a % 10 == 9 ? "nine" : ""));

    std::string bMinus = (b < 0) ? "minus " : "";
    if (b < 0) { b = -b; }

    std::string bText = (b < 20 ? (b == 0 ? "zero" : b == 1 ? "one" : b == 2 ? "two" : b == 3 ? "three" : b == 4 ? "four" : b == 5 ? "five"
                            : b == 6 ? "six" : b == 7 ? "seven" : b == 8 ? "eight" : b == 9 ? "nine" : b == 10 ? "ten" 
                            : b == 11 ? "eleven" : b == 12 ? "twelve" : b == 13 ? "thirteen" : b == 14 ? "fourteen" : b == 15 ? "fifteen" 
                            : b == 16 ? "sixteen" : b == 17 ? "seventeen" : b == 18 ? "eighteen" : "nineteen") : 
        std::string(b / 10 == 2 ? "twenty" : b / 10 == 3 ? "thirty" : b / 10 == 4 ? "forty" 
        : b / 10 == 5 ? "fifty" : b / 10 == 6 ? "sixty" : b / 10 == 7 ? "seventy" 
        : b / 10 == 8 ? "eighty" : "ninety") + ((b % 10 != 0) ? " " : "") + 
            (b % 10 == 1 ? "one" : b % 10 == 2 ? "two" : b % 10 == 3 ? "three" 
            : b % 10 == 4 ? "four" : b % 10 == 5 ? "five" : b % 10 == 6 ? "six" 
            : b % 10 == 7 ? "seven" : b % 10 == 8 ? "eight" : b % 10 == 9 ? "nine" : ""));


    if ( originalA < originalB ) 
    {
        std::cout << aMinus << aText << " less than " << bMinus << bText; 
    }
    else if ( originalA > originalB ) 
    {
        std::cout << aMinus << aText << " greater than " << bMinus << bText; 
    }
    else 
    {
        std::cout << aMinus << aText << " equal to " << bMinus << bText; 
    }

return 0;
}
