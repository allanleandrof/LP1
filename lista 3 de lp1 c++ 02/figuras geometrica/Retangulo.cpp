#include "Retangulo.hpp"  

#include <iostream>
	
Retangulo::Retangulo(int tipo)
    : FiguraGeometrica(tipo) {
	nome = "Retângulo";
}
	
float Retangulo::calcularArea() {
    return base * alt;
}

void Retangulo::lerAtributosArea() {
    std::cin >> alt;
    std::cin >> base;
}