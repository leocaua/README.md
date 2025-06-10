#include <iostream>
#include <iomanip>
using namespace std;

class Aluno {
private:
    double nota1;
    double nota2;

public:
    void lerNotas() {
        cout << "Digite a nota do 1 semestre: ";
        cin >> nota1;
        cout << "Digite a nota do 2 semestre: ";
        cin >> nota2;
    }

    double calcularNotaFinal() {
        return nota1 + nota2;
    }

    void exibirResultado() {
        double notaFinal = calcularNotaFinal();
        cout << fixed << setprecision(1);
        cout << "NOTA FINAL = " << notaFinal << endl;
        if (notaFinal < 60.0) {
            cout << "REPROVADO" << endl;
        }
    }
};

int main() {
    Aluno aluno;
    aluno.lerNotas();
    aluno.exibirResultado();
    return 0;
}
