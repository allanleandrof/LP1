#include "Vacina.hpp"  
	
Vacina::Vacina(string nome, int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, 
			string tipoInsumo, string tipo, int quantDoses, int intervalo)
	: Insumo(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo)
{
	this->tipo = tipo;
	this->quantDoses = quantDoses;
	this->intervalo = intervalo;
}
	
Vacina::~Vacina()
{
	cout << "Deletando Vacina" << endl;
}