#include <iostream>
#include <string>

// Función asignada a la Persona A
double fahrenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main() {
    double tempF;
    std::cout << "Ingrese la temperatura en Fahrenheit: ";
    std::cin >> tempF;

    double tempC = fahrenheitACelsius(tempF);
    std::cout << "Temperatura en Celsius: " << tempC << std::endl;

    return 0;
}