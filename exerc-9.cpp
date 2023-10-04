#include <iostream>

using namespace std;

int main() {
    int numero;
    int anterior = 0;
    int atual = 1;
    int proximo = 0;

    // Solicita ao usuário o número limite da sequência de Fibonacci
    cout << "Digite um numero inteiro para a sequencia de Fibonacci: ";
    cin >> numero;

    cout << "Sequencia de Fibonacci ate " << numero << ":" << endl;

    // Imprime os primeiros números da sequência de Fibonacci até o número fornecido
    while (proximo <= numero) {
        cout << proximo << " ";
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    cout << endl;

    return 0;
}