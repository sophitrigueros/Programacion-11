#include <iostream>
#include <string>
using namespace std;

bool es_valido(int a, int b, int c) {
    return(a + b > c) && (a + c > b) && (b + c > a);
}

string tipo_triangulo (int a, int b, int c){
    if (a == b && b == c){
        return "equilatero";
    } else if (a == b || a == c || b == c ){
        return "isosceles";
    } else {
        return "escaleno";
    }
}

int calcular_perimetro (int a, int b, int c){
    return a + b + c;
}

void describir_triangulo (int a, int b, int c){
    if (!es_valido(a, b, c)){
        cout << "Triangulo invalido." << endl;
        return;
    }
    cout << "Tipo: " << tipo_triangulo(a, b, c) << endl;
    cout << "Perimetro: " << calcular_perimetro (a, b, c) << endl;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    describir_triangulo (a, b, c);

    return 0;
}