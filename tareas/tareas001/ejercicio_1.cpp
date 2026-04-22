#include <iostream>
using namespace std;

int main (){
    const double g = 9.8;
    double t;
    double y;

    cout << "Ingrese el tiempo que tarda el objeto en pasar por la ventana (en segundos): " << endl;
    cin >> t;

    cout << "Ingrese la altura de la ventana (en metros): " << endl;
    cin >> y;

    if ( t <= 0 ){
        cout << "Error: el tiempo debe ser positivo." << endl;
        return 0;
    }

    if (y <= 0) {
        cout << "Error: la altura de la ventana debe ser positiva." << endl;
        return 0;
    }

    double v0 = (y - 0.5 * g * t * t ) / t;
    double h = ( v0 * v0) / (2 * g);

    if (h <= 0){
        cout << "Error: los valores ingresados implican h <= 0; el objeto no pudo haber sido soltado por encima del borde superior de la ventana." << endl;
        return 0;
    }

    cout << "La altura desde donde se solto el objeto es: " << h << " m" << endl;
    return 0;
}
