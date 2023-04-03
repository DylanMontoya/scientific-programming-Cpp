#include <iostream>  
#include <cstdlib>

using namespace std;

int main(){
    int a00, a01, a10, a11, det;

    cout << "Ingresar a00 y a10: "; cin >> a00 >> a10;
    cout << "Ingresar a01 y a11: "; cin >> a01 >> a11;

    det = (a00*a11) - (a01*a10);
    cout << "El determinante es: " << det;

    return 0;
}