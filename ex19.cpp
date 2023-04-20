#include <iostream>
using std::cout;

int main() {
    int c;
    c = 5;
    // podemos inicializar uma variável com ++variavel

    cout << c;
    cout << c++; // Imprime o mesmo valor e só depois incrementa 
    cout << c;
 
    cout << c;
    cout << ++c; // Imprime o valor incrementado antes
    cout << c;
    
    // lembre-se das palavras "Antes" e "Depois", o "Antes" seria o ++c, que vem antes do c. O "Depois" seria o que vem depois do c, c++.
    // A incrementação somente +1.
}