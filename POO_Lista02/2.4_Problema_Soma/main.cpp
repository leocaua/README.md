#include <iostream>
using namespace std;

class Soma {
private:
    int x;
    int y;

public:
    Soma(int x, int y) {
        this->x = x;
        this->y = y;
    }

    int calcular() const {
        return x + y;
    }
};

int main() {
    int x, y;

    cout << "Digite o primeiro valor: ";
    cin >> x;
    cout << "Digite o segundo valor: ";
    cin >> y;

    Soma soma(x, y);
    int resultado = soma.calcular();

    cout << "SOMA = " << resultado << endl;

    return 0;
}

