#include <iostream> // Incluis biblioteca entrada/salida estandar de C++

int main(){
    
    int n1,n2,suma; // Declara las variables
    
    std::cout << "Introduce primer numero: "; // Pedis el primer numero
    std::cin >> n1; // Lees el primer numero
    
    std::cout << "Introduce segundo numero: "; // Pedis el segundo numero
    std::cin >> n2; // Lees el segundo numero
    
    suma=n1+n2; // Calculas la suma
    
    std::cout << "El resultado de la suma es> " << suma << std::endl; // Mostras el resultado de la suma
    
    return 0; // Finalizas el programa
}
