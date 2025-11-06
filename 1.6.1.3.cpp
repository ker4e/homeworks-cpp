#include <iostream>

void twoSum ( int first, int second );
void twoDiff ( int first, int second );
void twoMultiplication ( int first, int second );
void twoDivision ( double first, double second );

int main() {
  int first {5};
  int second {10};

  twoSum (first, second);
  twoDiff(first, second);
  twoMultiplication (first, second);
  twoDivision (first, second);
  
return 0;
}

void twoSum ( int first, int second ) {std::cout << first << " + " << second << " = " << first + second << std::endl;}
void twoDiff ( int first, int second ) {std::cout << first << " - " << second << " = " << first - second << std::endl;}
void twoMultiplication ( int first, int second ) {std::cout << first << " * " << second << " = " << first * second << std::endl;}
void twoDivision ( double first, double second ) {std::cout << first << " / " << second << " = " << first / second << std::endl;}
