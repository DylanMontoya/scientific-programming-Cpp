#include <iostream>  
#include <cstdlib>

using namespace std;

int main(){
    int dia;
    float tiempo, pagar;

    cout << "Ingrese dia de la semana (siendo Luenes-> 1 y Domingo->7): ";
    cin >> dia;
    cout << "Ingrese tiempo: ";
    cin >> tiempo;

    switch (dia)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        if (tiempo <= 3){
            pagar = 3500;
            cout << "Usted debe pagar: " << pagar << " por el tiempo de: " << tiempo << " horas.";
        }
        else {
            pagar = 3500;
            int esc = 4000;
            int total = pagar + esc++;
            cout << "Usted debe pagar: " << total << " por el tiempo de: " << tiempo << " horas.";
        }

        break;
    case 6:
    case 7:
        pagar = 4500;
        cout << "Usted debe pagar: " << pagar << " por todo el dia.";
    }

    return 0;
}