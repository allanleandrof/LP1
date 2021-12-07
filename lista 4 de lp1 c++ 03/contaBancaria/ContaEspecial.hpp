#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#pragma once
	
#include "Conta.hpp"

class ContaEspecial  : public Conta
{
	private:

	public:
		ContaEspecial();
		ContaEspecial(std::string nomeCliente, int numeroConta, double salarioMensal);
		~ContaEspecial();
		void definirLimite();
};
#endif