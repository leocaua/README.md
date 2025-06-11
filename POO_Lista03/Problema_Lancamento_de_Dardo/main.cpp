#include <iostream>
using namespace std;

class LancamentoDardo {
private:
    double tentativa1, tentativa2, tentativa3;

public:
    void lerTentativas() {
        cout << "Digite a distancia da 1 tentativa: ";
        cin >> tentativa1;
        cout << "Digite a distancia da 2 tentativa: ";
        cin >> tentativa2;
        cout << "Digite a distancia da 3 tentativa: ";
        cin >> tentativa3;
    }

    void mostrarMaior() {
        double maior = tentativa1;
        if (tentativa2 > maior) maior = tentativa2;
        if (tentativa3 > maior) maior = tentativa3;

        cout << "Maior distancia lancada: " << maior << endl;
    }
};

int main() {
    LancamentoDardo atleta;
    atleta.lerTentativas();
    atleta.mostrarMaior();
    return 0;
}
