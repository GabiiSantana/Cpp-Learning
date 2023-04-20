#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int conta, result = 0;
    double saldo, debito, credito, limite;

    while(conta != -1){
        cout << "Digite o numero da conta [-1 para fechar]: ";
        cin >> conta;

        if (conta == -1) {
            break;
        }

        cout << "\nDigite seu saldo inicial: ";
        cin >> saldo;

        cout << "\nDigite debitos totais: ";
        cin >> debito;

        cout << "Digite creditos totais: ";
        cin >> credito;

        cout << "Digite limite de credito: ";
        cin >> limite;

        saldo += debito - credito;

        

        if (saldo > limite) {
            cout << "\nConta: " << conta;
            cout << "\nLimite de credito: " << limite;
            cout << "\nSaldo: " << saldo;
            cout << "\nLIMITE DE CREDITO EXCEDIDO\n\n";
        }
    }

    return 0;
}