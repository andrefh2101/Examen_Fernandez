#include <iostream>

int main() {
    int A, B;

    // Solicitar al usuario que ingrese los valores de A y B
    std::cout << "Datos de entrada:" << std::endl;
    std::cout << "A: ";
    std::cin >> A;
    std::cout << "B: ";
    std::cin >> B;

    // Intercambiar los valores de A y B utilizando una variable temporal
    int temp = A;
    A = B;
    B = temp;

    // Mostrar los valores invertidos
    std::cout << "Datos de salida:" << std::endl;
    std::cout << "A: " << A << std::endl;
    std::cout << "B: " << B << std::endl;

    return 0;
}
