#include <iostream>
#include <cstdlib>
using namespace std;

float sist_ecua()
{
    float a, b, c, d, e, f;
    float x, y, deno;
    
    cout << "Ingresar valor de a de b y de c \n";
    cin >> a >> b >> c;
    cout << "Ingresar valor de d de e y de f \n";
    cin >> d >> e >> f;

    deno = a*d - b*c;

    if (deno != 0)
    {
        x = (d*e - b*f)/deno;
        y = (a*f - c*e)/deno;

        cout << "Valor de X = " << x << ", ";
        cout << "Valor de Y = " << y;
    }
    else
    {
        cout << "El sistema diverge.\n";
        cout << "Por lo tanto tiene infinitas soluciones.";
    }
    return deno;
}

int main()
{
    sist_ecua();
    return 0;
}