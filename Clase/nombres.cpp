// Ejercicio 2: Nombres sin duplicados

#include <iostream>
#include <vector>
#include <set>

using namespace std;

const int N = 6;

int main (){
    vector<string> nombres;
    
    for (int i = 0; i < N; i++ ){
        string nombre;
        cin >> nombre;
        nombres.push_back(nombre);
    }

    set <string> unicos;
    for (const string& nombre : nombres){
        unicos.insert(nombre);
    }

    for (const string& nombre : unicos) {
        cout << nombre << '\n';
    }
    return 0;
}
