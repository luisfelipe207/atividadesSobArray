#include <iostream>
using namespace std;

int main() {

    int numeros[10];

    
    cout << "Digite 10 números inteiros:" << endl;
    for (int i = 0; i < 10; i++) {
    cout << "Número " << (i + 1) << ": ";
    cin >> numeros[i];
    }
    cout << "Você digitou os seguintes números:" << endl;
    for (int i = 0; i < 10; i++) {
    cout << numeros[i] << ": ";
    }

    return 0;
}