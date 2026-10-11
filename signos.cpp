#include <iostream>
#include <string>
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