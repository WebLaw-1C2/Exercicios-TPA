#include <iostream>
using namespace std;

int divi(int x ,int y){
    cout << (x/y);
}

int mult(int x ,int y){
    cout << (x*y);
}

int somar(int x ,int y){
    cout << (x+y);
}

int sub(int x ,int y){
    cout << (x-y);
}

int main(int argc, char argv[]) {
    int num1, num2;
    cout << "insira um valor: ";
    cin >> num1;
    cin >> num2;

    cout << "os numeros somados ficam: ";
    somar(num1,num2);
    cout << "\n";

    cout << "os numeros subtraidos ficam: ";
    sub(num1,num2);
    cout << "\n";

    cout << "os numeros multiplicados ficam: ";
    mult(num1,num2);
    cout << "\n";

    cout << "os numeros divididos ficam: ";
    divi(num1,num2);
    cout << "\n";

    return 0;
}
