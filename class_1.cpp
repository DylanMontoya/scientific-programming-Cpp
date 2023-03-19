#include <iostream>
#include <cstdlib>
using namespace std;

void word_B(){
    std::cout << "*****" << std::endl;
    std::cout << "*   *" << std::endl;
    std::cout << "****" << std::endl;
    std::cout << "*   *" << std::endl;
    std::cout << "*****" << std::endl;
}

// numeros mayores
void num_mayor(){
    int n1, n2, n3, mayor;
    cout << "Ingrese 3 numeros: "
    cin >> n1 >> n2 >> n3;
    
    n1 = mayor;
    if (n1 < n2){
        mayor = n2;
    }
    
}

int main() {
    std::cout << "Hola mundo! \n" << std::endl;
    cout << "Dylan \n";
    word_B();
    return 0;
}
