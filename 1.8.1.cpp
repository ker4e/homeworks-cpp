#include <iostream>

void counting_function();

int main(int argc, char** argv)
{
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
}

void counting_function() {
    static int counter{ 0 };
    std::cout << "Number of function calls counting_function(): " << ++counter << std::endl;
}
