#include "Consultor.hpp"  
	
Consultor::Consultor()
{
	
}
	
float Consultor::getSalario() {
    return salario + (salario * 0.1);
}

float Consultor::getSalario(int percentual) {
    return salario + (salario * percentual);
}