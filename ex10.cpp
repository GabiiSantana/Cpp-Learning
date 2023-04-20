#include <iostream>
using namespace std;


int main() {
    int num;

    cout << "Digite um número: ";
    cin >> num;

    if(num % 2 == 0)
        cout << "O número " << num << " é Par";
    else
        cout << "O número " << num << " é Impar";
    
    return 0;
}