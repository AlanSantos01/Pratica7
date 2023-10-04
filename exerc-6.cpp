#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    char continuar;

    do {
        
        long long matricula;
        double nota1, nota2, nota3, media;

        
        cout << "Digite a matricula do aluno: ";
        cin >> matricula;
        cout << "Digite as tres notas do aluno: ";
        cin >> nota1 >> nota2 >> nota3;

        // Calcular a média
        media = (nota1 + nota2 + nota3) / 3.0;

        // Imprime os dados formatados
        cout << "MATRICULA  NOTA1  NOTA2  NOTA3  MEDIA" << endl;
        cout << "=======================================" << endl;
        cout << fixed << setprecision(1);
        cout << matricula << "       " << nota1 << "     " << nota2 << "     " << nota3 << "     " << media << endl;

        
        cout << "Deseja cadastrar outro aluno? (S/N): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    return 0;
}