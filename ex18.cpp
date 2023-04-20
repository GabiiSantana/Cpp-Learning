#include <iostream>
using namespace std; 

int main() {
    int result, alunos, aprovado, reprovado, contador;
    alunos = 1;
    aprovado = 0;
    reprovado = 0;

    while (alunos <= 10) {
        cout << "Digite o RESULTADO do aluno[1/2]: ";
        cin >> result;
        
        alunos += 1;

        if (result == 1) {
            aprovado += 1;
        } else if (result == 2) {
            reprovado += 1;
        }
    }

    if (aprovado >= 8) {
        cout << "Aumente o valor do curso. \n";
    } 

    cout << "No total foram " << aprovado << " aprovados e " << reprovado << " reprovados." << endl;

}
// olá 