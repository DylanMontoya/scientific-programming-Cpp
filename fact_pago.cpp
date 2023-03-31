#include <iostream>
#include <cstdlib>
using namespace std;

int factorial(){
    int n, fact=1;

    cout << "\n Ingresar numero: ";
    cin >> n; 
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    cout << "El factorial de " << n << " es: " << fact;
    
    return 0;
}

int pago_personal(){
    int horas, tarifa, tasa;
    cout << "Ingresar horas laboradas: ";
    cin >> horas;
    cout << "Ingresar tarifa laboral: ";
    cin >> tarifa;
    cout << "Ingresar tasa de impuesto: ";
    cin >> tasa;
    
    int pago_neto, impuesto, pago_total;

    pago_neto = tarifa * horas;
    impuesto = pago_neto * (tarifa/100);
    pago_total = pago_neto - impuesto;

    cout << "El pago total es de: " << pago_total;

    return 0;
}

int main(){
    pago_personal();
    factorial();
    return 0;
}

