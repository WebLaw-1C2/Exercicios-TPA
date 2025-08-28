#include <iostream>
using namespace std;

string verificarOrdem(int nums[], int tamanho) {
    int crescente = true;
    int decrescente = true;

    for (int i = 0; i < tamanho - 1; i++) {
        if (nums[i] < nums[i + 1]) decrescente = false;
        if (nums[i] > nums[i + 1]) crescente = false;
    }

    if (crescente) return "Ordem crescente"; 
    if (decrescente) return "Ordem decrescente";
    return "Nao tem ordem";
}

int main() {
    int numeros[5];

    cout << "Digite 5 numeros:\n";
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    string resultado = verificarOrdem(numeros, 5);

    cout << "A ordem dos numeros e: " << resultado << endl;

    return 0;
}
