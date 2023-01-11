#include <iostream>
using std::cout;
using std::cin;

int main(){
    int x, y, z, result;

    cout << "Digite três números inteiros: ";
    cin >> x >> y >> z;

    result = x * y * z;
    cout << "O produto é: " << result;

    return 0;
}