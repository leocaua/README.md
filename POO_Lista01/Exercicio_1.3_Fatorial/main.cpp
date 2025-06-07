#include <iostream>

class Fatorial {
public:

    int calcular(int numero) {
        if (numero < 0) {
            std::cerr << "Erro: fatorial não é definido para números negativos.\n";
            return -1;
        }
        return calcularRecursivo(numero);
    }

private:

    int calcularRecursivo(int n) {
        if (n == 0 || n == 1)
            return 1;
        return n * calcularRecursivo(n - 1);
    }
};

int main() {
    int numero;
    std::cout << "Digite um numero inteiro nao negativo: ";
    std::cin >> numero;

    Fatorial f;
    int resultado = f.calcular(numero);

    if (resultado != -1)
        std::cout << "Fatorial de " << numero << " e: " << resultado << std::endl;

    return 0;
}


