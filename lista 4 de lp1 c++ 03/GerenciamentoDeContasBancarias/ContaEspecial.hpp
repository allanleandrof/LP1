#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#pragma once
	
#include "ContaCorrente.hpp"

class ContaEspecial : public ContaCorrente
{
	private:

	public:
		ContaEspecial(std::string nomeCliente, int numero, double salario);
		~ContaEspecial();
		double definirLimite();

};
#endif