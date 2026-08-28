#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool es_palindromo (string palabra) {
    int inicio = 0;
    int fin = palabra.length() -1;

    while (inicio < fin){
        if (tolower(palabra[inicio]) != tolower (palabra[fin])){
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}

int main(){
    string palabra;

    cin >> palabra;

    if (es_palindromo(palabra)){
        cout << "\"" << palabra << "\" es un palindromo." << endl;
    } else {
        cout << "\"" << palabra << "\" no es un palindromo." << endl;
    }
    return 0;
}