#include "Conta.hpp"  
	
Conta::Conta()
{
	
}

Conta::Conta(std::string nomeCliente, int numero)
{
	setNomeCliente(nomeCliente);
    setNumero(numero);
    saldo = 0;
}
	
Conta::~Conta()
{
	
}

void Conta::sacar(double valor){
    if (valor > saldo){
        std::cout << "\nsaldo insuficiente" << std::endl;
        return;
    }
    saldo -= valor;
}
void Conta::depositar(double valor){
    saldo += valor;
}

void Conta::setNomeCliente(std::string nomeCliente){
    this->nomeCliente = nomeCliente;
}
void Conta::setNumero(int numero){
    this->numero = numero;
}
void Conta::setSaldo(double saldo){
    this->saldo = saldo;
}

std::string Conta::getNomeCliente(){
    return nomeCliente;
}
int Conta::getNumero(){
    return numero;
}
double Conta::getSaldo(){
    return saldo;
}

double Conta::getSalario(){
    return 0;
}