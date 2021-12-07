#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#pragma once

#include "Conta.hpp"
	
class ContaCorrente : public Conta
{
	protected:
		double salario;
		int limite;

	public:
		ContaCorrente();
		ContaCorrente(std::string nomeCliente, int numero, double salario);
		~ContaCorrente();
		double definirLimite();
		double saldoTotalDisponivel();

		void setSalario(double salario);
		void setLimite(int limite);

		double getSalario();
		int getLimite();

};
#endif