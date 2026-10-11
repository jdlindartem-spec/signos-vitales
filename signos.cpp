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
using namespace std;

string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "Bradicardia";
    }
    else if (lpm <= 100) {
        return "Normal";
    }
    else {
        return "Taquicardia";
    }
}

int main() {
    int lpm;

    cout << "Ingrese la frecuencia cardiaca en lpm: ";
    cin >> lpm;

    cout << "Clasificacion: "
         << clasificarFrecuencia(lpm) << endl;

    return 0;
}