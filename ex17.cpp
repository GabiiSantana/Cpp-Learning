#include <iostream>
#include <iomanip> // diretiva  pro pré processador, para fazer o static_cast<double>() e entre outros precisamos conter isso no código.
using namespace std;

int main() {
    int soma, contador_notas, nota;
    double ponto_decimal; // [DOUBLE] um TIPO. Podemos utilizar o double ou o float, mas o double tem mais precisão do que float.

    soma = 0;
    contador_notas = 0;

    cout << "Digite um número ou digite -1 para finalizar: ";
    cin >> nota;

    while (nota != -1) {
        soma += nota;
        contador_notas += 1;

        cout << "Digite um número ou digite -1 para finalizar: ";
        cin >> nota;
    }

    if (contador_notas != 0) {
        ponto_decimal = static_cast<double>(soma) / contador_notas; // static_cast<double>(TIPO) é um operador de coersão, cria uma cópia de ponto flutuante.
        cout << "A média da turma é: " << setprecision(2) << setiosflags(ios::fixed | ios::showpoint) << ponto_decimal << endl; // setiosflags é um manipulador de stream, nesse caso ele define duas formatações de saída.
        //O setprecision são as casas depois da vírgula. ios::fixed faz o ponto flutuante ser exibido. Já o ios::showpoint força a impressão dos zeros não-significativos, tipo 8,00.
    } else
        cout << "Nenhuma nota digitada.";
    
    return 0;
}