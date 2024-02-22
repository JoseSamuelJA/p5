#include <iostream>

using namespace std;

// Funci�n para ordenar tres n�meros enteros de menor a mayor
void ordenar_numeros(int& a, int& b, int& c) {
    // Asegurar que 'a' sea el menor de los tres
    if (a > b) {
        swap(a, b);
    }
    if (a > c) {
        swap(a, c);
    }
    // Asegurar que 'b' sea el segundo menor de los tres
    if (b > c) {
        swap(b, c);
    }
}

int main() {
    int num1, num2, num3;
    cout << "Ingrese tres numeros enteros: ";
    cin >> num1 >> num2 >> num3;

    // Llamar a la funci�n para ordenar los n�meros
    ordenar_numeros(num1, num2, num3);

    // Mostrar los n�meros ordenados
    cout << "Los numeros ordenados de menor a mayor son: " << num1 << " " << num2 << " " << num3 << endl;

    return 0;
}
