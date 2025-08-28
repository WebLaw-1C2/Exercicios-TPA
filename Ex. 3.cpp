#include <iostream>
using namespace std;

int main() {
    char sexo;
    float altura;

    cout << "Informe seu sexo (M/F): ";
    cin >> sexo;
    cout << "Informe sua altura: ";
    cin >> altura;

    int peso;
    if (sexo == 'M' || sexo == 'm')
        peso = (int)(72.7 * altura - 58);
    else if (sexo == 'F' || sexo == 'f')
        peso = (int)(62.1 * altura - 44.7);
    else {
        cout << "Sexo invalido!" << endl;
        return 0;
    }

    cout << "Esse e seu peso ideal: " << peso << " kg" << endl;
    return 0;
}
