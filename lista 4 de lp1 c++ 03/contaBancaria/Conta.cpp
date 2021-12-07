#include "Conta.hpp"  

Conta::Conta()
{
	
}	

Conta::Conta(std::string nomeCliente, int numeroConta, double salarioMensal)
{
	setNomeCliente(nomeCliente);
    setNumeroConta(numeroConta);
    setSalaraioMensal(salarioMensal);
    saldo = 0;
    definirLimite();
}
	
Conta::~Conta()
{
	
}

void Conta::sacar(double valor){
    saldo -= valor;
}

void Conta::depositar(double valor){
    saldo += valor;
}

void Conta::saldoTotalDisponivel(){
    saldoTotal = saldo + limite;
}

void Conta::definirLimite(){
    limite = salarioMensal * 2;
}


void Conta::setNomeCliente(std::string nomeCliente){
    this->nomeCliente = nomeCliente;
}

void Conta::setNumeroConta(int numeroConta){
    this->numeroConta = numeroConta;
}

void Conta::setSalaraioMensal(double salarioMensal){
    this->salarioMensal = salarioMensal;
}

void Conta::setSaldo(double saldo){
    this->saldo = saldo;
}


std::string Conta::getNomeCliente(){
    return nomeCliente;
}

int Conta::getNumeroConta(){
    return numeroConta;
}

double Conta::getSalarioMensal(){
    return salarioMensal;
}

double Conta::getSaldo(){
    return saldo;
}

double Conta::getLimite(){
    return limite;
}

double Conta::getSaldoTotal(){
    return saldoTotal;
}	