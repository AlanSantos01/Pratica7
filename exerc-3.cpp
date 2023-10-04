#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Por favor, digite um número inteiro positivo." << endl;
        return 1;
    }

    cout << "Divisores de " << numero << ": ";
    for (int i = 1; i <= numero; ++i) {
        if (numero % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}