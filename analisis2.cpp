#include <iostream>  
#include <cstdlib>
#include <math.h>

using namespace std;

int main(){
    float a00;
    float a01;
    float a10;
    float a11;
    float b00;
    float b01;
    float b10;
    float b11;
    
    cout<<"Ingrese a00: ";
    cin>>a00;
    cout<<"Ingrese a01: ";
    cin>>a01;
    cout<<"Ingrese a10: ";
    cin>>a10;
    cout<<"Ingrese a11: ";
    cin>>a11;

    float det =(a00*a11) - (a10*a01);

    b00 = (a11/det);
    b01 = (a01/det)*(-1);
    b10 = (a10/det)*(-1);
    b11 = (a00/det);

    cout<<to_string(b00)+"  "+to_string(b01)+"\n";
    cout<<to_string(b10)+"  "+to_string(b11)+"\n";
    
}