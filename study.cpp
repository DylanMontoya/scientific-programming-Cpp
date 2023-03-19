#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

float hipotenusa()
{
    float cat_op, cat_ady, hipo;
    cout << "Ingrese cateto opuesto: ";
    cin >> cat_op;
    cout << "Ingrese cateto adyacente: ";
    cin >> cat_ady;
    hipo = sqrt(pow(cat_op, 2) + pow(cat_ady, 2));
    cout << "La hipotenusa del triangulo rectangulo es: " << hipo;

    return hipo;
}

float nmayor()
{
    float num1, num2, num3, mayor;
    cout << "Ingrese un valor: ";
    cin >> num1;
    cout << "Ingrese otro valor: ";
    cin >> num2;
    cout << "Ingrese ultimo valor: ";
    cin >> num3;
    
    if (num1 > num2)
    {
        if (num1 > num3) mayor = num1;
        else mayor = num3;
    }
    else if (num2 > num3) mayor = num2;
    else mayor = num3;
    
    cout << "El numero mayor es: " << mayor;

    return mayor;
}

int main()
{
    // hipotenusa();
    nmayor();
    return 0;
}