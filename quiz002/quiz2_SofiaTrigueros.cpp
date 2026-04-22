#include <iostream>
using namespace std;

void cargar (int vagones[], int p, int v) {
    for (int i = 0; i < p; i++){
        vagones [i] += v;
    }
}

int consultar(int vagones [], int p){
    return vagones[p -1];
}

int main (){
    int N, Q;
    cin >> N;

    int vagones [100] = {0};
    cin >> Q;

    for (int i = 0; i < Q; i++){
         char op;
        cin >> op;

        if (op == 'A'){
            int p, v;
            cin >> p >> v;
            cargar (vagones, p, v);
        } else if (op == 'C'){
            int p;
            cin >> p;
            cout << consultar(vagones, p) << endl;
        }
    }
    return 0;
}