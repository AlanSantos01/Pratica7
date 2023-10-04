#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numero, original, soma = 0, digito, quantidadeDigitos = 0;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    original = numero; 

    while (numero != 0) {
        numero /= 10;
        quantidadeDigitos++;
    }

    numero = original; 

    // Calcula a soma dos dígitos elevados à quantidade de dígitos
    while (numero != 0) {
        digito = numero % 10;
        soma += pow(digito, quantidadeDigitos);
        numero /= 10;
    }

    // Verifica se o número é um número Armstrong
    if (soma == original) {
        cout << original << " eh um numero Armstrong." << std::endl;
    } else {
        cout << original << " nao eh um numero Armstrong." << endl;
    }

    return 0;
}