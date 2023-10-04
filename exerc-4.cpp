#include <iostream>

using namespace std;

int main() {
    cout << "Numeros primos de 1 a 100:" << endl;

    for (int numero = 2; numero <= 100; ++numero) {
        bool ehPrimo = true;

        for (int divisor = 2; divisor * divisor <= numero; ++divisor) {
            if (numero % divisor == 0) {
                ehPrimo = false;
                break;
            }
        }

        if (ehPrimo) {
            cout << numero << " ";
        }
    }

    cout << endl;

    return 0;
}