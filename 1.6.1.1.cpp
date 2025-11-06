#include <iostream>

int twoSum ( int first, int second );
int twoDiff ( int first, int second );
int twoMultiplication ( int first, int second );
double twoDivision ( double first, double second );

int main() {
  int first {5};
  int second {10};

  twoSum (first, second);
  twoDiff(first, second);
  twoMultiplication (first, second);
  twoDivision (first, second);
  
return 0;
}

int twoSum ( int first, int second ) 
{
int sum{ first + second };
  std::cout << first << " + " << second << " = " << sum << std::endl;
  return sum;
}

int twoDiff ( int first, int second ) 
{
int diff{ first - second };
  std::cout << first << " - " << second << " = " << diff << std::endl;
  return diff;
}

int twoMultiplication ( int first, int second )
{
int mult { first * second };
  std::cout << first << " * " << second << " = " << mult << std::endl;
  return mult;
}

double twoDivision ( double first, double second )
{
double division { first / second };
  std::cout << first << " / " << second << " = " << division << std::endl;
  return division;
}
