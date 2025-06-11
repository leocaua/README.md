#include <iostream>
using namespace std;

class Coordenadas {
private:
    double x, y;

public:
    void lerCoordenadas() {
        cout << "Digite o valor de X: ";
        cin >> x;
        cout << "Digite o valor de Y: ";
        cin >> y;
    }

    void verificarPosicao() {
        if (x == 0 && y == 0) {
            cout << "Origem" << endl;
        } else if (x == 0) {
            cout << "Eixo Y" << endl;
        } else if (y == 0) {
            cout << "Eixo X" << endl;
        } else if (x > 0 && y > 0) {
            cout << "Q1" << endl;
        } else if (x < 0 && y > 0) {
            cout << "Q2" << endl;
        } else if (x < 0 && y < 0) {
            cout << "Q3" << endl;
        } else {
            cout << "Q4" << endl;
        }
    }
};

int main() {
    Coordenadas ponto;
    ponto.lerCoordenadas();
    ponto.verificarPosicao();
    return 0;
}
