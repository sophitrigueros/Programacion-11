#include <iostream>
#include <queue>
using namespace std;

// Funcion estallena
bool estallena(queue<string> fila, int capacidad) {
    return fila.size() >= capacidad;
}

// Funcion encolar
void encolar(queue<string> & fila, string nombre, int capacidad) {
    if (estallena(fila, capacidad)) {
        cout << "Fila llena" << endl;
    } else {
        fila.push(nombre);
    }
}

// Funcion atender
void atender(queue<string> & fila) {
    if (fila.empty()) {
        cout << "No hay nadie en fila" << endl;
    } else {
        cout << "Atendiendo a: " << fila.front() << endl;
        fila.pop();
    }
}

// Funcion frente
void frente(queue<string> fila) {
    if (fila.empty()) {
        cout << "No hay nadie en fila" << endl;
    } else {
        cout << "Sigue: " << fila.front() << endl;
    }
}

// Funcion cantidad
int cantidad(queue<string> fila) {
    return fila.size();
}

int main() {
    int capacidad;
    cout << "Ingrese la capacidad de la fila (1-100): ";
    cin >> capacidad;

    while (capacidad < 1 || capacidad > 100) {
        cout << "Capacidad invalida. Ingrese nuevamente: ";
        cin >> capacidad;
    }

    queue<string> fila;
    int opcion;
    string nombre;

    do {
        cout << "\n---Cafeteria CCP---" << endl;
        cout << "1. Encolar persona" << endl;
        cout << "2. Atender siguiente" << endl;
        cout << "3. Ver quien sigue" << endl;
        cout << "4. Cantidad en fila" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese nombre: ";
                cin >> nombre;
                encolar(fila, nombre, capacidad);
                break;

            case 2:
                atender(fila);
                break;

            case 3:
                frente(fila);
                break;

            case 4:
                cout << "En fila: " << cantidad(fila) << endl;
                break;

            case 5:
                cout << "Saliendo..." << endl;
                break;

            default:
                cout << "Opcion invalida" << endl;
        }

    } while (opcion != 5);

    return 0;
}