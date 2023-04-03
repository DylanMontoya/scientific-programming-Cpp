#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

float angulo_agudo(){

    float cat_op, cat_ady, angulo_A, angulo_B;

    cout << "\n\nIngrese cateto opuesto: "; cin >> cat_op;
    cout << "Ingrese cateto adyacente: "; cin >> cat_ady;

    angulo_A = atan(cat_op/cat_ady) * 180/M_PI; // lo convierto de una vez a grados
    angulo_B = 90 - angulo_A;

    cout << "El angulo agudo A es: " << angulo_A << " grados. \n";
    cout << "El angulo agudo B es: " << angulo_B << " grados.";

    return angulo_A + angulo_B;
}

int bin_hexa(){
    float b1, b2, b3, b4, decimal;

    cout << "Ingrese bit 1: "; cin >> b1;
    cout << "Ingrese bit 2: "; cin >> b2;
    cout << "Ingrese bit 3: "; cin >> b3;
    cout << "Ingrese bit 4: "; cin >> b4;

    decimal = (b1*pow(2, 3))+(b2*pow(2, 2))+(b3*pow(2, 1))+(b4*pow(2, 0));
    // cout << decimal;
    if (decimal <= 9){
        cout << "El hexa decimal es: " << decimal;
    }
    else if (decimal == 10){
        cout << "El hexa decimal es: " << 'A';
    }
    else if (decimal == 11){
        cout << "El hexa decimal es: " << 'B';
    }
    else if (decimal == 12){
        cout << "El hexa decimal es: " << 'C';
    }
    else if (decimal == 13){
        cout << "El hexa decimal es: " << 'D';
    }
    else if (decimal == 14){
        cout << "El hexa decimal es: " << 'E';
    }
    else if (decimal == 15){
        cout << "El hexa decimal es: " << 'F';
    }
    return decimal;
}

int long_onda(){
    float onda;
    cout << "\n\nIngrese longitud de onda en nm: ";
    cin >> onda;

    if (onda < 380 || onda > 750)
    {
        cout << "El espectro esta por fuera del espectro visible.";
    }

    else
    {
        if (onda <= 750 || onda > 650){
            cout << "El espectro visible es rojo.";
        }
        else if (onda <= 650 || onda > 600){
        cout << "El espectro visible es naranja.";
        }
        else if (onda <= 600 || onda > 550){
        cout << "El espectro visible es amarillo.";
        }
        else if (onda <= 550 || onda > 500){
        cout << "El espectro visible es verde.";
        }
        else if (onda <= 500 || onda > 450){
        cout << "El espectro visible es azul.";
        }
        else if (onda <= 450 || onda <= 380){
        cout << "El espectro visible es violeta.";
        }
    }
    
    return 0;
}

int ortogonal(){

    int x1, y1, x2, y2, x3, y3, x4, y4;
    int AB_x, AB_y, CD_x, CD_y, producto;

    cout << "Ingrese las 4 posicones de X y Y: ";
    cin >> x1 >> y1;
    cout << "Ingrese las 4 posicones de X y Y: ";
    cin >> x2 >> y2;
    cout << "Ingrese las 4 posicones de X y Y: ";
    cin >> x3 >> y3;
    cout << "Ingrese las 4 posicones de X y Y: ";
    cin >> x4 >> y4;

    AB_x = x2 - x1;
    AB_y = y2- y1;
    CD_x = x4 - x3;
    CD_y = y4 - y3;

    producto = AB_x * CD_x + AB_y * CD_y;

    cout << producto;
    return 0;
}


int main(){
    // bin_hexa();
    // angulo_agudo();
    // long_onda();
    ortogonal();
    return 0;
}