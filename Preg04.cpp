#include <iostream>

int main() {
    double ganancias;
    double donativo;

    // Ingresamos la ganancia
    std::cout << "Datos de entrada:\n ";
    std::cout << "Ganancia: ";
    std::cin >> ganancias;

    // Calcular el donativo según los rangos de ganancias
    if (ganancias <= 1000) {
        donativo = ganancias * 0.05; // 5%
    } else if (ganancias <= 1500) {
        donativo = ganancias * 0.07; // 7%
    } else if (ganancias <= 2000) {
        donativo = ganancias * 0.08; // 8%
    } else if (ganancias <= 5000) {
        donativo = ganancias * 0.10; // 10%
    } else {
        donativo = ganancias * 0.15; // 15%
    }

    // Mostrar el donativo
    std::cout << "Datos de salida:\n ";
    std::cout << "Donacion:" << "S/." << donativo << std::endl;

    return 0;
}
