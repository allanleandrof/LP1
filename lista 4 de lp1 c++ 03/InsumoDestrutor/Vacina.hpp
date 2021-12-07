#ifndef VACINA_H
#define VACINA_H
#pragma once

#include "Insumo.hpp"	
	
class Vacina : public Insumo
{
	private:
		int quantDoses, intervalo;
		string tipo;

	public:
		Vacina(string nome, int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, 
			string tipoInsumo, string tipo, int quantDoses, int intervalo);
		virtual ~Vacina();

};
#endif