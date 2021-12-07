#include "OrcamentoEstouradoException.hpp"  

#include <iostream>
	
OrcamentoEstouradoException::OrcamentoEstouradoException(double valorTotal)
{
	valor = valorTotal;
}
	
OrcamentoEstouradoException::~OrcamentoEstouradoException()
{
	
}

std::string OrcamentoEstouradoException::getMessage(){
    char texto[50];
    sprintf(texto, "%.0lf", valor);
    return "OrcamentoEstouradoException " + std::string(texto) + "\n";
}