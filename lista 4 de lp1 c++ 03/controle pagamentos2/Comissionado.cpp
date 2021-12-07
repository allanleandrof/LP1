#include "Comissionado.hpp"  

Comissionado::Comissionado()
{
	
}

Comissionado::Comissionado(double vendasMensais, double percentualComissao)
{
	setVendasMensais(vendasMensais);
    setPercentualComissao(percentualComissao);
}
	
double Comissionado::calcularSalario(){
    return vendasMensais * percentualComissao;
}

void Comissionado::setVendasMensais(double vendasMensais){
    this->vendasMensais = vendasMensais;
}
void Comissionado::setPercentualComissao(double percentualComissao){
    this->percentualComissao = percentualComissao;
}