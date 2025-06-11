#include <iostream>
using namespace std;

class MenorDeTres {
private:
    int a, b, c;

public:
    void lerNumeros() {
        cout << "Digite tres numeros inteiros: ";
        cin >> a >> b >> c;
    }

    void mostrarMenor() {
        int menor = a;

        if (b < menor) {
            menor = b;
        }
        if (c < menor) {
            menor = c;
        }

        cout << "MENOR = " << menor << endl;
    }
};

int main() {
    MenorDeTres numeros;
    numeros.lerNumeros();
    numeros.mostrarMenor();
    return 0;
}
