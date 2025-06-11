#include <iostream>
using namespace std;

class DuracaoJogo {
private:
    int horaInicial, horaFinal, duracao;

public:
    void lerHoras() {
        cout << "Digite a hora inicial do jogo 0 a 23: ";
        cin >> horaInicial;
        cout << "Digite a hora final do jogo 0 a 23: ";
        cin >> horaFinal;
    }

    void calcularDuracao() {
        if (horaInicial == horaFinal) {
            duracao = 24;
        } else if (horaInicial < horaFinal) {
            duracao = horaFinal - horaInicial;
        } else {
            duracao = 24 - horaInicial + horaFinal;
        }
    }

    void exibirResultado() {
        cout << "O jogo durou " << duracao << " horas" << endl;
    }
};

int main() {
    DuracaoJogo jogo;
    jogo.lerHoras();
    jogo.calcularDuracao();
    jogo.exibirResultado();
    return 0;
}
