#ifndef PESSOA_H
#define PESSOA_H
#pragma once
	
#include <string>

#include "Endereco.hpp"

class Pessoa {
	private:
		std::string nome;
		Endereco endereco;
		std::string telefone;

	public:
		Pessoa();
		Pessoa(std::string nome);
		Pessoa(std::string nome, Endereco endereco, std::string telefone);
		std::string toString();

		void setNome(std::string nome);
		void setEndereco(Endereco endereco);
		void setTelefone(std::string telefone);

		std::string getNome();
		Endereco getEndereco();
		std::string getTelefone();

};
#endif