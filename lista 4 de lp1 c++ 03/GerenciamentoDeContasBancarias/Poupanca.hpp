#ifndef POUPANCA_H
#define POUPANCA_H
#pragma once
	
#include "Conta.hpp"

class Poupanca : public Conta 
{
	private:
		int variacao;
		double taxaRendimento;

	public:
		Poupanca();
		Poupanca(std::string nomeCliente, int numero);
		~Poupanca();
		double render();
		double saldoTotalDisponivel();

		void setVariacao(int variacao);
		void setTaxaRendimento(double taxaRendimento);

		int getVariacao();
		double getTaxaRendimento();

};
#endif