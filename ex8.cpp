#include <iostream>
#include <cmath>
using namespace std;


double areaCirculo(double raio) {
    return M_PI * raio * raio;
}

int main() {
    const int N = 5; 
    double raios[N]; 
    double somaAreas = 0.0; 


    for (int i = 0; i < N; i++) {
        cout << "Digite o raio do circulo " << i+1 << ": ";
        cin >> raios[i];
    }


    for (int i = 0; i < N; i++) {
        somaAreas += areaCirculo(raios[i]);
    }

    cout << "\nA soma das areas dos 5 circulos e: " << somaAreas << endl;

    return 0;
}
