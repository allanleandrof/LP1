#ifndef EPI_H
#define EPI_H
#pragma once

#include "Insumo.hpp"	
	
class EPI : public Insumo
{
	private:
		string tipo;
		string descricao;

	public:
		EPI(string nome, int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante,
			string tipoInsumo, string tipo, string descricao);
		virtual~EPI();

};
#endif