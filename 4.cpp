#include <iostream>

using namespace std;

// Función para ordenar tres números enteros de menor a mayor
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

    // Llamar a la función para ordenar los números
    ordenar_numeros(num1, num2, num3);

    // Mostrar los números ordenados
    cout << "Los numeros ordenados de menor a mayor son: " << num1 << " " << num2 << " " << num3 << endl;

    return 0;
}
