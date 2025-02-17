#include <iostream>
using namespace std;

// Función para calcular el área de un rectángulo
double calcularAreaRectangulo(double base, double altura) {
    return base * altura;
}

int main() {
    double base, altura;
    cout << "Ingrese la base del rectángulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectángulo: ";
    cin >> altura;
    
    // Llamada a la función calcularAreaRectangulo
    double area = calcularAreaRectangulo(base, altura);
    
    cout << "El área del rectángulo es: " << area << endl;
    return 0;
}
