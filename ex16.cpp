#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int soma, contador_notas, nota, media;
    contador_notas = 1;
    soma = 0;

    while (contador_notas <= 5){
        cout << "Digite sua nota: ";
        cin >> nota;

        soma = soma + nota;
        contador_notas = contador_notas + 1;
    }

    media = soma / 5;
    std::cout << "Media das 5 notas e: " << media << endl;
}