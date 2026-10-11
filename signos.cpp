#include <iostream>
#include <string>

using namespace std;

// Función asignada a la Persona A
double fahrenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "Bradicardia";
    } else if (lpm <= 100) {
        return "Normal";
    } else {
        return "Taquicardia";
    }
}

int main() {
    double tempF;
    cout << "Ingrese la temperatura en Fahrenheit: ";
    cin >> tempF;

    double tempC = fahrenheitACelsius(tempF);
    cout << "Temperatura en Celsius: " << tempC << endl;

    int lpm;
    cout << "Ingrese la frecuencia cardiaca en lpm: ";
    cin >> lpm;

    cout << "Clasificacion: " << clasificarFrecuencia(lpm) << endl;

    return 0;
}