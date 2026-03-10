#include <iostream>
using namespace std;

int main(){
    int consumoMensual, tarifaSocial;
    int subtotal = 0;
    int descuento = 0;
    int total;

    cin >> consumoMensual;
    cin >> tarifaSocial;

    if (consumoMensual <= 200){
        subtotal = consumoMensual * 75;
    }

    else if (consumoMensual >= 201 && consumoMensual <= 400){
        subtotal = (200 * 75) + ((consumoMensual - 200) * 110);
    }

    else{
        subtotal = (200 * 75) + (200 * 110) + ((consumoMensual - 400) * 160);
    }

    if (tarifaSocial == 1 && consumoMensual == 200){
        descuento = subtotal * 0.40;
    }

    total = subtotal - descuento;

    cout << "Subtotal: " << subtotal << '\n';
    cout << "Descuento: " << descuento << '\n';
    cout << "Total: " << total << '\n';

    return 0;
}