#include "Circulo.hpp"  

#include <iostream>
	
Circulo::Circulo(int tipo)
    : FiguraGeometrica(tipo) {
	nome = "Circulo";
}
	
float Circulo::calcularArea(){
    return 3.14 * (raio * raio);
}

void Circulo::lerAtributosArea(){
    std::cin >> raio;
}