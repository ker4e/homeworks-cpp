#include <iostream>

int main()
{
int a{}, b{}, c{};
std::cout << "Enter three numbers: ";
std::cin >> a >> b >> c;

int min{}, mid{}, max{};
max = (a >= c && a >= b) ? a : ((b >= a && b >= c) ? b : c);
min = (a <= c && a <= b) ? a : ((b <= a && b <= c) ? b : c);
mid = (a != min && a != max) ? a : ((b != min && b != max) ? b : c);

std::cout << "Numbers in descending order: " << max << " " << mid << " " << min << "\n";
return 0;
}
