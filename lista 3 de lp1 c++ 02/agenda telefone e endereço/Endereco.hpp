#ifndef ENDERECO_H
#define ENDERECO_H
#pragma once

#include <string>
	
class Endereco {
	private:
		std::string rua;
		std::string numero;
		std::string bairro;
		std::string cidade;
		std::string estado;
		std::string CEP;

	public:
		Endereco(std::string rua, std::string numero, std::string bairro, std::string cidade, std::string estado, std::string CEP);
		Endereco();
		std::string toString();

};
#endif