#include <iostream>
using namespace std; 

int main(){
    int num1, num2, num3, num4, num5;

    cout << "Digite cinco números inteiros: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    if (num1 > num2 and num1 > num3 and num1 > num4 and num1 > num5)
        cout << num1 << " É o maior número.\n";
    if (num2 > num1 and num2 > num3 and num2 > num4 and num2 > num5)
        cout << num2 << " É o maior número.\n";
    if (num3 > num1 and num3 > num2 and num3 > num4 and num3 > num5)
        cout << num3 << " É o maior número.\n";
    if (num4 > num1 and num4 > num2 and num4 > num3 and num4 > num5)
        cout << num4 << " É o maior número.\n";
    if (num5 > num1 and num5 > num2 and num5 > num3 and num5 > num4)
        cout << num5 << " É o maior número.\n";

    if (num1 < num2 and num1 < num3 and num1 < num4 and num1 < num5)
        cout << num1 << " É o menor número.";
    if (num2 < num1 and num2 < num3 and num2 < num4 and num2 < num5)
        cout << num2 << " É o menor número.";
    if (num3 < num1 and num3 < num2 and num3 < num4 and num3 < num5)
        cout << num3 << " É o menor número.";
    if (num4 < num1 and num4 < num2 and num4 < num3 and num4 < num5)
        cout << num4 << " É o menor número.";
    if (num5 < num1 and num5 < num2 and num5 < num3 and num5 < num4)
        cout << num5 << " É o menor número.";
    
    return 0;
}