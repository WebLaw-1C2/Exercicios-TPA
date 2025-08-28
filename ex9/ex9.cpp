#include <iostream>
#include <string>
using namespace std;

string substituirVogais(string palavra) {
    for (int i = 0; i < palavra.length(); i++) {
        char c = tolower(palavra[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            palavra[i] = '*';
        }
    }
    return palavra;
}

int main() {
    string palavra;

    cout << "Digite uma palavra: ";
    cin >> palavra;

    string resultado = substituirVogais(palavra);

    cout << "Palavra modificada: " << resultado << endl;

    return 0;
}
