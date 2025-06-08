#include <iostream>
#include <vector>
#include <limits>

class Matriz {
private:
    std::vector<std::vector<int>> dados;
    int linhas, colunas;

public:
    Matriz(int m, int n) : linhas(m), colunas(n) {
        dados.resize(linhas, std::vector<int>(colunas));
    }

    void preencher() {
        std::cout << "Digite os valores da matriz (" << linhas << "x" << colunas << "):\n";
        for (int i = 0; i < linhas; ++i) {
            for (int j = 0; j < colunas; ++j) {
                std::cout << "Elemento [" << i << "][" << j << "]: ";
                std::cin >> dados[i][j];
            }
        }
    }

    void encontrarMaiorMenor(int& maior, int& menor) {
        maior = std::numeric_limits<int>::min();
        menor = std::numeric_limits<int>::max();

        for (int i = 0; i < linhas; ++i) {
            for (int j = 0; j < colunas; ++j) {
                if (dados[i][j] > maior) maior = dados[i][j];
                if (dados[i][j] < menor) menor = dados[i][j];
            }
        }
    }
};

int main() {
    int m, n;
    std::cout << "Digite o numero de linhas da matriz: ";
    std::cin >> m;
    std::cout << "Digite o numero de colunas da matriz: ";
    std::cin >> n;

    Matriz matriz(m, n);
    matriz.preencher();

    int maior, menor;
    matriz.encontrarMaiorMenor(maior, menor);

    std::cout << "Maior elemento: " << maior << "\n";
    std::cout << "Menor elemento: " << menor << "\n";

    return 0;
}

