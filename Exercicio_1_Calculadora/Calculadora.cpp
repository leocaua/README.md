#include "Calculadora.h"
#include <iostream>

double Calculadora::somar(double a, double b) {
    return a + b;
}

double Calculadora::subtrair(double a, double b) {
    return a - b;
}

double Calculadora::multiplicar(double a, double b) {
    return a * b;
}

double Calculadora::dividir(double a, double b) {
    if (b == 0) {
        std::cerr << "Erro: divisão por zero." << std::endl;
        return 0;
    }
    return a / b;
}
