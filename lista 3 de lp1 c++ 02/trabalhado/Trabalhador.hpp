#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#pragma once

#include <string>

class Trabalhador {
	protected:
		std::string nome;
		float salario;

	public:
		Trabalhador();
		~Trabalhador();

		void setNome(std::string nome);
		void setSalario(int salario);

		std::string getNome();
		float getSalario();

};
#endif