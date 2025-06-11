#include <iostream>
using namespace std;

class Multiplos {
private:
    int a, b;

public:
    void lerNumeros() {
        cout << "Digite o primeiro numero: ";
        cin >> a;
        cout << "Digite o segundo numero: ";
        cin >> b;
    }

    void verificarMultiplos() {
        if (a % b == 0 || b % a == 0) {
            cout << "Sao multiplos" << endl;
        } else {
            cout << "Nao sao multiplos" << endl;
        }
    }
};

int main() {
    Multiplos numeros;
    numeros.lerNumeros();
    numeros.verificarMultiplos();
    return 0;
}
