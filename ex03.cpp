#include <iostream>
using std::cout;
using std::cin;

int main() {
    int num1, num2, soma, mt, dv;
    
    cout << "Digite dois números: ";
    cin >> num1 >> num2;

    soma = num1 + num2;
    mt = num1 * num2;
    dv = num1 / num2;

    cout << "SOMA: " << soma << "\nMULTIPLICAÇÃO: " << mt << "\nDIVISÃO: " << dv << "\n";
    if (num1 > num2) 
        cout << num1 << " é maior que " << num2;
    else if (num1 == num2)
        cout << num1 << " é igual a " << num2; 
    else 
        cout << num2 << " é maior que " << num1;
}