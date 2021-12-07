#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#pragma once

#include "Funcionario.hpp"
#include <vector>
	
class SistemaGerenciaFolha  
{
	private:
		std::vector<Funcionario*> funcionarios;
		double orcamentoMax;

	public:
		SistemaGerenciaFolha();
		SistemaGerenciaFolha(double valorMax);
		~SistemaGerenciaFolha();
		double consultaSalarioFuncionario(std::string nome);
		double calculaValorTotalFolha();

		void setFuncionarios(Funcionario* func);

};
#endif