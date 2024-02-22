#include <iostream>

using namespace std;

int factorial(int n) {
    int resultado = 1;
    while (n > 1) {
        resultado *= n;
        n--;
    }
    return resultado;
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero >= 0) {
        int resultado = factorial(numero);
        cout << "El factorial de " << numero << " es: " << resultado << endl;
    } else {
        cout << "El factorial no está definido para números negativos." << endl;
    }

    return 0;
}
