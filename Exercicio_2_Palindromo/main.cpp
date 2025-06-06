#include <iostream>
#include <string>
#include "Palindromo.h"

int main() {
    std::string entrada;
    std::cout << "Digite uma palavra ou frase: ";
    std::getline(std::cin, entrada);

    if (Palindromo::ehPalindromo(entrada)) {
        std::cout << "É um palíndromo!" << std::endl;
    } else {
        std::cout << "Não é um palíndromo." << std::endl;
    }

    return 0;
}
