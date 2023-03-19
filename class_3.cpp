#include <iostream>
#include <cstdlib>
using namespace std;

void mes(){
    int nmes, dias;
    cout << "Ingrese el numero del mes: ";
    cin >> nmes;

    switch (nmes)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        dias = 30;
        // break;
    case 2:
        dias = 28;
        break;
    default:
        dias = 31;
    }
    cout << "El mes tiene " << dias <<" dias";
}

int main(){
    mes();
    return 0;
}