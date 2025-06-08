#include <iostream>

class Numero {

    int valor;

public:

    Numero(int v) {
        valor = v;
    }

    void imprimirValor() const {
        std::cout << "Valor do atributo: " << valor << std::endl;
    }

    void imprimirEndereco() const {
        std::cout << "Endereco do objeto simulado: " << this << std::endl;
    }
};

int main() {

    Numero numero(10);

    numero.imprimirValor();

    numero.imprimirEndereco();

    return 0;
}

