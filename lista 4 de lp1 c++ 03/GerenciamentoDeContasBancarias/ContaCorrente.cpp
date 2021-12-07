#include "ContaCorrente.hpp"  
	
ContaCorrente::ContaCorrente()
{
	
}

ContaCorrente::ContaCorrente(std::string nomeCliente, int numero, double salario)
    : Conta(nomeCliente, numero)
{
	setSalario(salario);
    definirLimite();
}
	
ContaCorrente::~ContaCorrente()
{
	
}

double ContaCorrente::saldoTotalDisponivel(){
    saldoTotal = limite + saldo;

    return saldoTotal;
}

double ContaCorrente::definirLimite(){
    limite = salario * 2;

    return limite;
}

void ContaCorrente::setSalario(double salario){
    this->salario = salario;
}
void ContaCorrente::setLimite(int limite){
    this->limite = limite;
}

double ContaCorrente::getSalario(){
    return salario;
}
int ContaCorrente::getLimite(){
    return limite;
}