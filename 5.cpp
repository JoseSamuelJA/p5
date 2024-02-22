#include <iostream>

using namespace std;

int suma_digitos(int numero) {
    int suma = 0;
    numero =(numero);
    while (numero > 0) {
        suma += numero % 10; 
        numero /= 10; 
    }
    return suma;
}

int main() {
    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;

    int suma = suma_digitos(num);
    cout << "La suma de los digitos de " << num << " es: " << suma << endl;

    return 0;
}
