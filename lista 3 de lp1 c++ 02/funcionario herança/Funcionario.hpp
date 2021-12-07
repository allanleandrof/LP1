#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#pragma once

#include <string>
	
class Funcionario {
	protected:
		int matricula;
		std::string nome;
		float salario;

	public:
		Funcionario();
		~Funcionario();

		int getMatricula();
		std::string getNome();
		float getSalario();

		void setMatricula(int matricula);
		void setNome(std::string nome);
		void setSalario(float salario);

};
#endif