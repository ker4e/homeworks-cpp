#include <iostream>
#include <string>

int main() {
	
    std::string secretWord{ "watermelon" };
    std::string answer{};

    do {
        std::cout << "Choose the hidden word: strawberry, watermelon, apple, orange: ";
        std::getline(std::cin, answer);
      
        if (secretWord != answer) 
        {
            std::cout << "Wrong!" << std::endl;
        }
    } while (secretWord.compare(answer));

    std::cout << "Congratulations! You win! Secret word is " << secretWord << std::endl;

    return EXIT_SUCCESS;
}
