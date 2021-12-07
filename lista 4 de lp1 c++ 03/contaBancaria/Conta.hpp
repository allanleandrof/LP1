#ifndef CONTA_H
#define CONTA_H
#pragma once

#include "IConta.hpp"
#include <string>
	
class Conta  : public IConta
{
	protected:
		std::string nomeCliente;
		int numeroConta;
		double salarioMensal;
		double saldo; 
		double limite;
		double saldoTotal;

	public:
		Conta();
		Conta(std::string nomeCliente, int numeroConta, double salarioMensal);
		~Conta();

		void sacar(double valor);
		void depositar(double valor);
		void saldoTotalDisponivel();
		void definirLimite();

		void setNomeCliente(std::string nomeCliente);
		void setNumeroConta(int numeroConta);
		void setSalaraioMensal(double salarioMensal);
		void setSaldo(double saldo);

		std::string getNomeCliente();
		int getNumeroConta();
		double getSalarioMensal();
		double getSaldo();
		double getLimite();
		double getSaldoTotal();
};
#endif