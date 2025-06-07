#include <iostream>

class ConversorTemperatura {
public:
    // Converte Celsius para Fahrenheit
    double celsiusParaFahrenheit(double celsius) {
        return (celsius * 9.0 / 5.0) + 32;
    }

    // Converte Fahrenheit para Celsius
    double fahrenheitParaCelsius(double fahrenheit) {
        return (fahrenheit - 32) * 5.0 / 9.0;
    }
};

int main() {
    ConversorTemperatura conversor;
    int opcao;
    double temperatura, resultado;

    std::cout << "Escolha a conversao:\n";
    std::cout << "1 - Celsius para Fahrenheit\n";
    std::cout << "2 - Fahrenheit para Celsius\n";
    std::cout << "Opcao: ";
    std::cin >> opcao;

    if (opcao == 1) {
        std::cout << "Digite a temperatura em Celsius: ";
        std::cin >> temperatura;
        resultado = conversor.celsiusParaFahrenheit(temperatura);
        std::cout << "Resultado: " << resultado << " graus Fahrenheit\n";
    } else if (opcao == 2) {
        std::cout << "Digite a temperatura em Fahrenheit: ";
        std::cin >> temperatura;
        resultado = conversor.fahrenheitParaCelsius(temperatura);
        std::cout << "Resultado: " << resultado << " graus Celsius\n";
    } else {
        std::cout << "Opcao invalida.\n";
    }

    return 0;
}
