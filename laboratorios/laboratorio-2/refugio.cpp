#include <iostream>
#include <string>

using namespace std;

class Mascota {
protected:
    string nombre;
    int edad;

public: 
    Mascota(string nombre, int edad) : nombre(nombre), edad(edad){}
    
    void imprimirInfo() const{
        cout << "Nombre: " << nombre << ", Edad: " << edad << " año(s)";
    }
};

class Perro : public Mascota {
private:
    string raza;

public:
    Perro(string nombre, int edad, string raza)
        : Mascota(nombre, edad), raza(raza){}

    void imprimirInfo() const{
        Mascota::imprimirInfo();
        cout << ", Raza: " << raza << endl;
    }
};

class Gato : public Mascota {
private: 
    bool viveInterior;

public:
    Gato(string nombre, int edad, bool viveInterior)
        : Mascota(nombre, edad), viveInterior(viveInterior){}

    void imprimirInfo() const {
        Mascota::imprimirInfo();
        cout << ", Vive en interior: " << (viveInterior ? "Sí" : "No") << endl;
    }
};

int main() {
    int N;
    if (!(cin >> N)) return 0;

    for (int i = 0; i < N; ++i){
        string tipo;
        cin >> tipo;

        if (tipo == "perro"){
            string nombre, raza;
            int edad;
            cin >> nombre >> edad >> raza;

            Perro p(nombre, edad, raza);
            p.imprimirInfo();

        } else if (tipo == "gato"){
            string nombre;
            int edad, intInterior;
            cin >> nombre >> edad >> intInterior;

            bool viveInterior = (intInterior == 1);

            Gato g(nombre, edad, viveInterior);
            g.imprimirInfo();
        }
    }
    return 0;
}