#ifndef INSUMO_H
#define INSUMO_H
#pragma once

#include <string>
#include <iostream>

using namespace std;
	
class Insumo  
{
	protected:
		string nome, dtVencimento, nomeFabricante, tipoInsumo;
		int quantidade, valorUnitario;

	public:
		Insumo();
		Insumo(string nome, int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, string tipoInsumo);
		virtual ~Insumo();

};
#endif