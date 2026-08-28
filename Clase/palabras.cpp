// Ejercicio 1: Frecuencia de palabras

#include <iostream>
#include <map>
using namespace std;

const int N = 5;

int main() {
    map<string, int> frecuencia;

    for (int i = 0; i < N; i++) {
        string palabra;
        cin >> palabra;
        frecuencia[palabra]++;
    }

    for (auto& elemento : frecuencia) {
        cout << elemento.first << ": " << elemento.second << '\n';
    }

    return 0;
}