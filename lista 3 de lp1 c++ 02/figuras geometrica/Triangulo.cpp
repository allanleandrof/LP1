#include "Triangulo.hpp"  

#include <iostream>
	
Triangulo::Triangulo(int tipo)
    : FiguraGeometrica(tipo) {
    nome = "Triângulo";
}
	
float Triangulo::calcularArea() {
    return (base * alt) / 2;
}

void Triangulo::lerAtributosArea() {
    std::cin >> alt;
    std::cin >> base;
}