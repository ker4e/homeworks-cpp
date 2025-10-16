#include <iostream>

int main()
{
    std::cout << std::boolalpha;
    std::cout << "Operator: ||" << std::endl;
    std::cout << "A\tB\tA || B" << std::endl;
    std::cout << true  << "\t" << true  << "\t" << (true  || true)  << std::endl;
    std::cout <<  false << "\t" << true  << "\t" << (false  || true)  << std::endl;
    std::cout << true  << "\t" << false  << "\t" << (true  || false)  << std::endl;
    std::cout << false  << "\t" << false  << "\t" << (false  || false)  << "\n\n";

    std::cout << "Operator: &&" << std::endl;
    std::cout << "A\tB\tA && B" << std::endl;
    std::cout << true  << "\t" << true  << "\t" << (true  && true)  << std::endl;
    std::cout <<  false << "\t" << true  << "\t" << (false  && true)  << std::endl;
    std::cout << true  << "\t" << false  << "\t" << (true  && false)  << std::endl;
    std::cout << false  << "\t" << false  << "\t" << (false  && false)  << std::endl;

    return 0;
}
