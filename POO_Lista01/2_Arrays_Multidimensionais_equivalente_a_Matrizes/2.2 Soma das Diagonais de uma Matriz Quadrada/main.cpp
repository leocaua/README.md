#include <iostream>
#include <vector>

class MatrizQuadrada {
private:
    std::vector<std::vector<int>> dados;
    int ordem;

public:
    MatrizQuadrada(int n) : ordem(n) {
        dados.resize(ordem, std::vector<int>(ordem));
    }

    void preencher() {
        std::cout << "Digite os elementos da matriz " << ordem << "x" << ordem << ":\n";
        for (int i = 0; i < ordem; ++i) {
            for (int j = 0; j < ordem; ++j) {
                std::cout << "Elemento [" << i << "][" << j << "]: ";
                std::cin >> dados[i][j];
            }
        }
    }

    int somaDiagonalPrincipal() {
        int soma = 0;
        for (int i = 0; i < ordem; ++i) {
            soma += dados[i][i];
        }
        return soma;
    }

    int somaDiagonalSecundaria() {
        int soma = 0;
        for (int i = 0; i < ordem; ++i) {
            soma += dados[i][ordem - 1 - i];
        }
        return soma;
    }
};

int main() {
    int n;
    std::cout << "Digite a ordem da matriz quadrada: ";
    std::cin >> n;

    MatrizQuadrada matriz(n);
    matriz.preencher();

    int somaPrincipal = matriz.somaDiagonalPrincipal();
    int somaSecundaria = matriz.somaDiagonalSecundaria();

    std::cout << "Soma da diagonal principal: " << somaPrincipal << "\n";
    std::cout << "Soma da diagonal secundaria: " << somaSecundaria << "\n";

    return 0;
}

