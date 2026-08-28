#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;
const int N = 5;

int main (){
    vector<pair<int, string>> pedidos;
    queue<string> cola_espera;

    for (int i = 0; i< N; i++){
        string nombre;
        int monto;
        if (cin >> nombre >> monto){
            pedidos.push_back({monto, nombre});
            cola_espera.push(nombre);
        }
    }

    sort(pedidos.begin(), pedidos.end());

    cout << "Pedidos ordenados por monto: " << endl;
    for (const auto& p : pedidos){
        cout << p.second << ": " << p.first << endl;
    }

    if (!pedidos.empty()){
        auto it_max = max_element(pedidos.begin(), pedidos.end());
        cout << "Pedido mayor: "<< it_max-> second << " (" << it_max->first << ")" << endl;
    }

    string  buscado;
    if (cin >> buscado){
        auto it_busqueda = pedidos.end();

        for (auto it = pedidos.begin(); it != pedidos.end(); ++it){
            if (it -> second == buscado){
                it_busqueda = it;
                break;
            }
        }

        if (it_busqueda != pedidos.end()){
            cout << it_busqueda -> second << " pidio por " << it_busqueda->first << " colones" << endl;
        } else {
            cout << buscado << " no hizo pedido" << endl;
        }
    }
    cout << flush;

    stack <string> historial;
    while (!cola_espera.empty()){
        string atendido = cola_espera.front();
        cola_espera.pop();
        cout << "Atendido: " << atendido << endl;
        historial.push(atendido);
    }
    cin.clear();

    string comando;
    if (cin >> comando){
        if (comando == "deshacer"){
            if (!historial.empty()){
                string ultimo = historial.top();
                historial.pop();
                cola_espera.push(ultimo);
                cout << ultimo << " vuelve a la fila" << endl;
            }
        }
    }
    return 0;
}