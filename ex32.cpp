#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int result = 0;
    double KM, litros, tanque;

    while (result != -1){
        cout << "\nQuilometros rodados [-1 para fechar o programa]: ";
        cin >> KM;

        if (KM == -1) {
            break;
        }

        cout << "\nLitros gastos: ";
        cin >> litros;

        tanque = static_cast<double>(KM) / static_cast<double>(litros);
        cout << "Os quilometros por litro para esse tanque foram: " << setprecision(3) << setiosflags(ios::fixed | ios::showpoint) << tanque;
    }

    return 0;
}