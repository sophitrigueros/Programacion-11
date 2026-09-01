#include <iostream>
using namespace std;

int main() {

    const double A = 331;
    const double B = 0.6;
    const double C = -273.15;
    double v, T;

    cout << "Ingrese la velocidad del objeto (en m/s): " << endl;
    cin >> v;

    cout << "Ingrese la temperatura del aire (en C): " << endl;
    cin >> T;

    if (v < 0) {
        cout << "Error: la velocidad no puede ser negativa." << endl;
        return 0;
    }

    if (T <= C) {
        cout << "Error: la temperatura no puede ser menor o igual al cero absoluto (-273.15 C)." << endl;
        return 0;
    }

    double vs = A + B * T;
    double M = v / vs;

    string regimen;

    if (M < 0.8) {
        regimen = "Subsonico";
    }
    else if (M >= 0.8 && M < 1.2) {
        regimen = "Transonico";
    }
    else if (M >= 1.2 && M < 5.0) {
        regimen = "Supersonico";
    }
    else {
        regimen = "Hipersonico";
    }

    cout << "vs = " << vs << " m/s" << endl;
    cout << "M = " << M << endl;
    cout << "Regimen: " << regimen << endl;

    return 0;
}