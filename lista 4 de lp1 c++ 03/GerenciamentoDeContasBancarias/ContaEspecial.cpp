#include "ContaEspecial.hpp"  
	
ContaEspecial::ContaEspecial(std::string nomeCliente, int numero, double salario)
    : ContaCorrente(nomeCliente, numero, salario)
{
	definirLimite();
}
	
ContaEspecial::~ContaEspecial()
{
	
}

double ContaEspecial::definirLimite(){
    limite = salario * 4;

    return limite;
}