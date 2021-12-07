#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#pragma once

#include <string>
	
class Funcionario  
{
	protected:
		std::string nome;
		int matricula;

	public:
		Funcionario();
		virtual double calcularSalario() = 0;

		void setNome(std::string nome);
		void setMatricula(int matricula);

		std::string getNome();
		int getMatricula();

};
#endif