#ifndef CONTA_H
#define CONTA_H
#pragma once

#include <iostream>
#include <string>
	
class Conta  
{
	protected:
		std::string nomeCliente;
		int numero;
		double saldo;
		double saldoTotal;

	public:
		Conta();
		Conta(std::string nomeCliente, int numero);
		~Conta();

		virtual double saldoTotalDisponivel() = 0;
		virtual double getSalario();

		void sacar(double valor);
		void depositar(double valor);

		void setNomeCliente(std::string nomeCliente);
		void setNumero(int numero);
		void setSaldo(double saldo);

		std::string getNomeCliente();
		int getNumero();
		double getSaldo();

};
#endif