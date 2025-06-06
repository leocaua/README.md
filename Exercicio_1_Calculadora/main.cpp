#include <iostream>
#include "Calculadora.h"
#include "Calculadora.cpp"

int main() {
    Calculadora calc;
    double a, b;
    char op;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> a;
    std::cout << "Digite o segundo numero: ";
    std::cin >> b;
    std::cout << "Digite a operação (+, -, *, /): ";
    std::cin >> op;

    double resultado;

    switch (op) {
        case '+': resultado = calc.somar(a, b); break;
        case '-': resultado = calc.subtrair(a, b); break;
        case '*': resultado = calc.multiplicar(a, b); break;
        case '/': resultado = calc.dividir(a, b); break;
        default:
            std::cout << "Operação inválida." << std::endl;
            return 1;
    }

    std::cout << "Resultado: " << resultado << std::endl;
    return 0;
}
