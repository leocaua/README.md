#include <iostream>
using namespace std;

class MedidorGlicose {
private:
    double glicose;

public:
    void lerGlicose() {
        cout << "Digite a quantidade de glicose no sangue (mg/dL): ";
        cin >> glicose;
    }

    void classificar() {
        if (glicose < 70) {
            cout << "Classificacao: Hipoglicemia" << endl;
        } else if (glicose <= 99) {
            cout << "Classificacao: Normal" << endl;
        } else if (glicose <= 125) {
            cout << "Classificação: Pre diabetes" << endl;
        } else {
            cout << "Classificacao: Diabetes" << endl;
        }
    }
};

int main() {
    MedidorGlicose medidor;
    medidor.lerGlicose();
    medidor.classificar();
    return 0;
}
