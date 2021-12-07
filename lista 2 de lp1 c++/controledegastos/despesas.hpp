#ifndef DESPESAS_H
#define DESPESAS_H
#pragma once

#include <string>
	
class despesas  
{
	private:
		std::string nome, tipoDeGasto;
		float valor;

	public:
		despesas();

		void setNome(std::string nom);
		void setValor(float val);
		void setTipoDeGasto(std::string tipogasto);
		std::string getNome();
		float getValor();
		std::string getTipoDeGasto();

		

};
#endif