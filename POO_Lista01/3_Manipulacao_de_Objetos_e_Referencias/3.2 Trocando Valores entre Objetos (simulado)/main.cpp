#include <iostream>

class ValorContainer {
public:
    int valor;

    ValorContainer(int v = 0) {
        valor = v;
    }

    static void trocarValores(ValorContainer &refA, ValorContainer &refB) {
        int temp = refA.valor;
        refA.valor = refB.valor;
        refB.valor = temp;
    }
};

int main() {
    ValorContainer objA, objB;

    std::cout << "Digite o valor para objA: ";
    std::cin >> objA.valor;

    std::cout << "Digite o valor para objB: ";
    std::cin >> objB.valor;

    std::cout << "\nAntes da troca:\n";
    std::cout << "objA.valor = " << objA.valor << std::endl;
    std::cout << "objB.valor = " << objB.valor << std::endl;

    ValorContainer::trocarValores(objA, objB);

    std::cout << "\nDepois da troca:\n";
    std::cout << "objA.valor = " << objA.valor << std::endl;
    std::cout << "objB.valor = " << objB.valor << std::endl;

    return 0;
}
