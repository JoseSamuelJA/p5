#include <iostream>

using namespace std;

int contar_digitos(int numero) {
    int contador = 0;
    if (numero == 0) {
        return 1;
    }
    do {
        numero /= 10; 
        contador++; 
    } while (numero != 0);
    return contador;
}

int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    int cantidad_digitos = contar_digitos(numero);
    cout << "El numero " << numero << " tiene " << cantidad_digitos << " digitos." << endl;

    return 0;
}
