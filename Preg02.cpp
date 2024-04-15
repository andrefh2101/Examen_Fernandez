#include <iostream>

int main() {
    int n;
    int suma = 0;

    // Ingresamos el numero n
    std::cout << "Datos de entrada:\n ";
    std::cout << "n: ";
    std::cin >> n;

    // Se calcula la suma de los n numeros naturales
    for (int i = 1; i <= n; ++i) {
        suma += i;
    }

    // Mostrar la suma
    std::cout << "Datos de salida:\n ";
    std::cout << "Sumatoria: " << suma << std::endl;

    return 0;
}
