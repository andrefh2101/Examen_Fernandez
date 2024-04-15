#include <iostream>

int main() {
    int horas;
    const int costoPrimeras4Horas = 6;
    const int costoPorHoraAdicional = 2;

    // Solicitar al usuario que ingrese el número de horas
    std::cout << "Datos de entrada:\n ";
    std::cout << "Horas: ";
    std::cin >> horas;

    // Calcular el importe a pagar
    int importe;
    if (horas <= 4) {
        importe = costoPrimeras4Horas;
    } else {
        importe = costoPrimeras4Horas + (horas - 4) * costoPorHoraAdicional;
    }

    // Mostrar el importe a pagar
    std::cout << "Datos de salida:\n ";
    std::cout << "Importe a pagar = S/." << importe << std::endl;

    return 0;
}
