#include <iostream>

using namespace std;

int main() {
    int numero, reverso = 0, original, digito;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    original = numero; 
    
    // Inverter os dígitos do número
    while (numero > 0) {
        digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    //Verificaa se o número é um palíndromo
    if (original == reverso) {
        cout << "O numero " << original << " eh um palindromo." << endl;
    } else {
        cout << "O numero " << original << " nao eh um palindromo." << endl;
    }

    return 0;
}