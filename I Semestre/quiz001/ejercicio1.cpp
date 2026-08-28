#include <iostream>
using namespace std;

int main (){
    int edad, tipoDia;
    string categoria;
    int precioBase;
    float recargo = 0;
    float precioFinal;

    cin >> edad;
    cin >> tipoDia;

    if (edad < 12){
        categoria = "Nino" ;
        precioBase = 2500;
    }

    else if (edad >= 12 && edad <= 64){
        categoria = "Adulto";
        precioBase = 4000;
    }

    else {
        categoria = "Adulto mayor";
        precioBase = 2000;
    }

    if (tipoDia == 2){
        recargo = precioBase * 0.20;
    }

    precioFinal = precioBase + recargo;

    cout << "Categoria: " << categoria << '\n';
    cout << "Precio Base: " << precioBase << '\n';
    cout << "Recargo: " << recargo << '\n';
    cout << "Total: " << precioFinal << '\n';

    return 0;
}