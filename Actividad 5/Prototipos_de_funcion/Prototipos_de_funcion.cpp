#include <iostream>
using namespace std;

// Prototipo de la función
double calcularAreaTriangulo(double base, double altura);

int main() {
    double base, altura;
    cout << "Ingrese la base del triángulo: ";
    cin >> base;
    cout << "Ingrese la altura del triángulo: ";
    cin >> altura;
    
    // Llamada a la función calcularAreaTriangulo
    double area = calcularAreaTriangulo(base, altura);
    
    cout << "El área del triángulo es: " << area << endl;
    return 0;
}

// Definición de la función
double calcularAreaTriangulo(double base, double altura) {
    return (base * altura) / 2;
}
