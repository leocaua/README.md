#include "Calculadora.h"
#include <iostream>

double Calculadora::somar(double a, double b){
    return a+b;
}

double Calculadora::subtracao(double a, double b){
    return a-b;
}

double Calculadora::multiplicacao(double a, double b){
    return a*b;
}

double Calculadora::divisao(double a, double b){
    if(b == 0){
        std::cerr << "Divisao zero!" << std::endl;
            return 0;
    }
    return a/b;
}