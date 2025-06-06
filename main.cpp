#include <iostream>
#include "Calculadora.h"
#include "Calculadora.cpp"

int main() {
    Calculadora calc;
    double a, b;
    char op;

std::cout << "Digite o Primeiro numero: ";
std::cin >> a;
std::cout << "Digite Segundo Numero: ";
std::cin >> b;
std::cout << "Digite Operador (+, -, *, /): ";
std::cin >> op;

    double resultado;

switch (op) {

    case '+':resultado = calc.somar(a, b); break;
    case '-': resultado = calc.subtracao(a, b); break;
    case '*': resultado = calc.multiplicacao(a, b); break;
    case '/': resultado = calc.divisao(a, b); break;
    default:
        std::cout << "Operação inválida." << std::endl;
        return 1;
    }
    std::cout << resultado << std::endl;
        return 0;
}