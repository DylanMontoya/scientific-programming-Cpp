#include <iostream>  
#include <cstdlib>

using namespace std;
 
int main(){
    int gama, km;
    int pagar;

    cout << "1 para auto gama baja. \n";
    cout << "2 para auto gama alta.\n";
    cout << "Seleccione gama del auto: ";
    cin >> gama;
    cout << "Ingrese km recorridos: ";
    cin >> km;

    pagar = 100000;
    int iva = 20000;
    
    switch (gama)
    {
    case 1:
        if (km <= 100)
        {
            int total = pagar + iva;
            cout << "Total a pagar: " << total;
        }

        else if (km > 100 && km <= 1000)
        {
            int dif = km - 100; 
            if (dif >= 10)
            {
                int esc = (dif/10)*15000;
                
                int total = pagar + esc + iva;
                cout << "Total a pagar: " << total;
            }
        }
        else if (km > 1000)
        {
            int dif = km - 100; 
            if (dif >= 10)
            {
                int esc = (dif/10)*10000;
                
                int total = pagar + esc + iva;
                cout << "Total a pagar: " << total;
            }

        }
        break;
    
    case 2:
        if (km <= 100)
        {
            float incr = 100000 * 0.3;
            int total = pagar + incr + iva;
            cout << "Total a pagar: " << total;
        }

        else if (km > 100 && km <= 1000)
        {
            int dif = km - 100; 
            if (dif >= 10)
            {
                float incr = 100000 * 0.3;
                int esc = (dif/10)*15000;
                
                int total = pagar + esc + incr + iva;
                cout << "Total a pagar: " << total;
            }
        }
        
        else if (km > 1000)
        {
            int dif = km - 100; 
            if (dif >= 10)
            {
                float incr = 100000 * 0.3;
                int esc = (dif/10)*10000;
                
                int total = pagar + esc + incr + iva;
                cout << "Total a pagar: " << total;
            }

        }
    
        break;

    }
    return 0;
}