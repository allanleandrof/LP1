#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H
#pragma once
	
#include "Insumo.hpp"	

class Medicamento : public Insumo
{
	private:
		string dosagem, administracao, disponibilizacao;

	public:
		Medicamento(string nome, int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante,
		string tipoInsumo, string dosagem, string administracao, string disponibilizacao);
		virtual ~Medicamento();
 
};
#endif