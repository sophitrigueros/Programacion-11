#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 6;

int main() {
    vector<int> notas(N);

    cout << "Ingrese las " << N << " notas:\n";
    for (int i = 0; i < N; i++) {
        cin >> notas[i];
    }

    sort(notas.begin(), notas.end());

    cout << "\nNotas ordenadas: ";
    for (int nota : notas) {
        cout << nota << " ";
    }
    cout << endl;

    int buscar;
    cout << "\nIngrese la nota a buscar: ";
    cin >> buscar;

    auto it = find(notas.begin(), notas.end(), buscar);

    if (it != notas.end()) {
        cout << "La nota " << buscar << " si fue obtenida por algun estudiante.\n";
    } else {
        cout << "La nota " << buscar << " no fue obtenida por ningun estudiante.\n";
    }

    int maxima = *max_element(notas.begin(), notas.end());
    int minima = *min_element(notas.begin(), notas.end());

    cout << "Nota maxima: " << maxima << endl;
    cout << "Nota minima: " << minima << endl;

    return 0;
}