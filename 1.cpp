#include <iostream>

using namespace std;

int suma_pares_o_impares(int inicio, int fin, bool pares) {
    int suma = 0;
    for (int i = inicio; i <= fin; ++i) {
        if ((i % 2 == 0 && pares) || (i % 2 != 0 && !pares)) {
            suma += i;
        }
    }
    return suma;
}

int main() {
    int inicio, fin;
    cout << "Ingrese el primer numero: ";
    cin >> inicio;
    cout << "Ingrese el segundo numero: ";
    cin >> fin;

    int suma_pares = suma_pares_o_impares(inicio, fin, true);
    cout << "La suma de los numeros pares entre " << inicio << " y " << fin << " es: " << suma_pares << endl;

    int suma_impares = suma_pares_o_impares(inicio, fin, false);
    cout << "La suma de los numeros impares entre " << inicio << " y " << fin << " es: " << suma_impares << endl;

    return 0;
}
