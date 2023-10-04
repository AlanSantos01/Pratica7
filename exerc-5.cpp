#include <iostream>
#include <cstdlib> 
#include <ctime>   // Para a função time()

using namespace std;

int main() {
    // Inicialize a semente para gerar números aleatórios
    srand(time(nullptr));

    // Gere um número aleatório entre 1 e 100
    int numeroAleatorio = rand() % 100 + 1;

    int palpite;
    int tentativas = 0;

    cout << "Bem-vindo ao jogo de adivinhacao!" << endl;

    do {
        // Peça ao usuário para fornecer um palpite
        cout << "Tente adivinhar o numero (entre 1 e 100): ";
        cin >> palpite;
        
        // Verifique se o palpite está correto, alto ou baixo
        if (palpite < numeroAleatorio) {
            cout << "Seu palpite esta baixo. Tente novamente." << endl;
        } else if (palpite > numeroAleatorio) {
            cout << "Seu palpite esta alto. Tente novamente." << endl;
        } else {
            cout << "Parabens! Voce acertou o numero em " << tentativas + 1 << " tentativas." << endl;
        }

        tentativas++;

    } while (palpite != numeroAleatorio);

    return 0;
}