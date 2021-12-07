#include "Insumo.hpp"  
	
Insumo::Insumo()
{
    nome = "-";
    quantidade = 0;
    valorUnitario = 0;
    dtVencimento = "-";
    nomeFabricante = "-";
    tipoInsumo = "-";
}

Insumo::Insumo(string nome, int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante, string tipoInsumo)
{
	this->nome = nome;
    this->quantidade = quantidade;
    this->valorUnitario = valorUnitario;
    this->dtVencimento = dtVencimento;
    this->nomeFabricante = nomeFabricante;
    this->tipoInsumo = tipoInsumo;
}
	
Insumo::~Insumo()
{
	cout << "Deletando Insumos" << endl;
}