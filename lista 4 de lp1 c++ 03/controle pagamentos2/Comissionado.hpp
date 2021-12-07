#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#pragma once

#include "Funcionario.hpp"

class Comissionado : public Funcionario  
{
	private:
		double vendasMensais;
		double percentualComissao;

	public:
		Comissionado();
		Comissionado(double vendasMensais, double percentualComissao);
		double calcularSalario();

		void setVendasMensais(double vendasMensais);
		void setPercentualComissao(double percentualComissao);

};
#endif