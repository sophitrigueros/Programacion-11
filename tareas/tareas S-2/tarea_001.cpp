#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class EstacionMeteorologica {
private:
    string nombreEstacion;
    vector<double> lecturas;

public:
    EstacionMeteorologica(){
        nombreEstacion = "Estacion sin nombre";
    }

    EstacionMeteorologica(string nombreEstacion){
        this -> nombreEstacion = nombreEstacion;
    }

    bool registrarLectura(double temperatura){
        if (temperatura >= -50.0 && temperatura <= 60.0){
            lecturas.push_back(temperatura);
            return true;
        }
        return false;
    }

    double promedio() const{
        if (lecturas.empty()){
            return 0.0;
        }
        double suma = 0.0;
        for (double temp : lecturas){
            suma += temp;
        }
        return suma / lecturas.size();
    }
    double maxima () const{
        if (lecturas.empty()){
            return 0.0;
        }
        double max_temp = lecturas[0];
        for (double temp : lecturas){
            if (temp > max_temp){
                max_temp = temp;
            }
        }
        return max_temp;
    }
    string getNombreEstacion() const{
        return nombreEstacion;
    }

    int getCantidadLecturas() const{
        return lecturas.size();
    }
};

int main(){
    string nombre;
    if (!(cin >> nombre)){
        return 0;
    }

    EstacionMeteorologica estacion(nombre);

    int M;
    if (!(cin >> M)){
        return 0;
    }

    for (int i = 0; i < M; i++){
        string comando;
        if (!(cin >> comando)){
            break;
        }

        if (comando == "registrar"){
            double temp;
            cin >> temp;
            if (estacion.registrarLectura(temp)){
                cout << "Lectura registrada: "<< temp << "\n";
            }else {
                cout << "Error: la temperatura debe estar entre -50 y 60.\n";  
            }
        } else if (comando == "promedio"){
            if (estacion.getCantidadLecturas() == 0){
                cout << "Sin lecturas registradas.\n";
            }else {
                cout << "Promedio: " << estacion.promedio() << "\n"; 
            }
        } else if (comando == "maxima"){
            if (estacion.getCantidadLecturas() == 0){
                cout << "Sin lecturas registradas.\n";
            } else {
                cout << "Maxima: " << estacion.maxima() << "\n";
            }
        } else if (comando == "cantidad"){
            cout << estacion.getNombreEstacion() << " - lecturas registradas: " << estacion.getCantidadLecturas() << ".\n";
        }
    }

    return 0;
}