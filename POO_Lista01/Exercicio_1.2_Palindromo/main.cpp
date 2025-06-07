#include <iostream>
#include "Palindromo.h"
#include "Palindromo.cpp"
#include <cctype>

int main() {
    std::string entrada;

    std::cout << "Digite uma palavra ou frase: ";
    std::getline(std::cin, entrada);

    Palindromo verificador;
    if (verificador.Palindromos(entrada)) {
        std::cout << "E um palindromo!" << std::endl;
    } else {
        std::cout << "Nao e um palindromo." << std::endl;
    }

    return 0;
}
