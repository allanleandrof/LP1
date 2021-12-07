#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#pragma once

#include "Imovel.hpp"
	
class Apartamento : public Imovel {
	private:
		int quartos, andar, vagasGaragem;
		float condominioValor, area;

	public:
		Apartamento();
		void exibeAtributos();
		void lerAtributos();

};
#endif