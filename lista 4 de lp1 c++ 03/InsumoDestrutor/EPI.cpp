#include "EPI.hpp"  
	
EPI::EPI(string nome, int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante,
			string tipoInsumo, string tipo, string descricao)
    : Insumo(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo)
{
    this->tipo = tipo;
    this->descricao = descricao;
}
	
EPI::~EPI()
{
	cout << "Deletando EPI" << endl;
}