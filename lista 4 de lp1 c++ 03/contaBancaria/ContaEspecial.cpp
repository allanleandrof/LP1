#include "ContaEspecial.hpp" 

ContaEspecial::ContaEspecial()
{
	
}

ContaEspecial::ContaEspecial(std::string nomeCliente, int numeroConta, double salarioMensal){
    setNomeCliente(nomeCliente);
    setNumeroConta(numeroConta);
    setSalaraioMensal(salarioMensal);
    saldo = 0;
    definirLimite();
}
	
ContaEspecial::~ContaEspecial()
{
	
}

void ContaEspecial::definirLimite(){
    limite = salarioMensal * 3;
}