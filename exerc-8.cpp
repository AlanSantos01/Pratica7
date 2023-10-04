#include <iostream>

using namespace std;

int main() {
    int numero;
    int somaDivisores = 0;

    // Solicita um número inteiro ao usuário
    cout << "Digite um numero inteiro: ";
    cin >> numero;

    // Verifica os divisores e calcula a soma
    for (int i = 1; i < numero; ++i) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }

    // Verifica se o número é perfeito
    if (somaDivisores == numero) {
        cout << numero << " eh um numero perfeito." << endl;
    } else {
        cout << numero << " nao eh um numero perfeito." << endl;
    }

    return 0;
}