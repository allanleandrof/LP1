#ifndef CONTROLE_H
#define CONTROLE_H
#pragma once

#include "despesas.hpp"
	
class controle{
	private:
		despesas *despesa = new despesas[100];

	public:
		controle();
		void setDespesa(despesas de, int posi);
		despesas getDespesa(int posi);
		float CalculaTotalDeDespesas();
		float CalculaTotalDeDespesas(std::string tipos);
		bool ExisteDespesaDoTipo(std::string tipos);

};
#endif