#include <iostream>  
#include <cstdlib>
#include <math.h>

using namespace std;

int main(){

    int mes=3;
    int ano=2023;
    int dia=29;
    string df;

    cout<<"Ingresar dia:";
    cin>>dia;
    cout<<"Ingresar mes:";
    cin>>mes;
    cout<<"Ingresar año:";
    cin>>ano;

    if(mes<=2){
        mes=mes+12;
        ano=ano-1;
    }else{
        mes=mes-2;
    }

    int a=ano%=100;
    int b=ano/100;    
    int d=( 700 + ((mes*26-2)/10) + dia + a + (a / 4) + (b / 4) - (b * 2));
    cout<<b;
    int f=d%=7;
    
    if(f==0){
        df="Domingo";
    }else if(f==1){
        df="Lunes";
    }else if(f==2){
        df="Martes";
    }else if(f==3){
        df="Miercoles";
    }else if(f==4){ 
        df="Jueves";
    }else if(f==5){
        df="Viernes";
    }else if(f==6){
        df="Sabado";
    }

    cout<<"El dia es: "+df;
}