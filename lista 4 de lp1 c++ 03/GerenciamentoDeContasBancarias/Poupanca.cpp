#include "Poupanca.hpp"  
	
Poupanca::Poupanca()
{
	
}

Poupanca::Poupanca(std::string nomeCliente, int numero)
    : Conta(nomeCliente, numero)
{
	variacao = 51;
    taxaRendimento = 0.006;
}
	
Poupanca::~Poupanca()
{
	
}

double Poupanca::saldoTotalDisponivel(){
    saldoTotal = render();

    return saldoTotal;
}

double Poupanca::render(){
    return saldo + (saldo * taxaRendimento);
}

void Poupanca::setVariacao(int variacao){
    this->variacao = variacao;
}
void Poupanca::setTaxaRendimento(double taxaRendimento){
    this->taxaRendimento = taxaRendimento;
}

int Poupanca::getVariacao(){
    return variacao;
}
double Poupanca::getTaxaRendimento(){
    return taxaRendimento;
}