#include <iostream>
using namespace std;

// Función que modifica el valor de un número usando pasaje por referencia
void modificarNumero(int &numero) {
    numero *= 2;
}

int main() {
    int numero = 5;
    cout << "Valor original del número: " << numero << endl;
    
    // Llamada a la función modificarNumero
    modificarNumero(numero);
    
    cout << "Valor modificado del número: " << numero << endl;
    return 0;
}

