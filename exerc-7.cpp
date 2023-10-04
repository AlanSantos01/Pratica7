#include <iostream>

using namespace std;

int main() {
    int altura;

    cout << "Digite a altura do padrao: ";
    cin >> altura;

    char caractere = 'A'; 

    // Loop para gerar e imprimir o padrão
    for (int linha = 1; linha <= altura; ++linha) {
        for (int coluna = 1; coluna <= linha; ++coluna) {
            cout << caractere;
            ++caractere; // Avança para o próximo caractere
        }
        cout << endl;
    }

    return 0;
}