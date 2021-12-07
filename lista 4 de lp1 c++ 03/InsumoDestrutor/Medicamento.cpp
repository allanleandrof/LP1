#include "Medicamento.hpp"  
	
Medicamento::Medicamento(string nome, int quantidade, int valorUnitario, string dtVencimento, string nomeFabricante,
			string tipoInsumo, string dosagem, string administracao, string disponibilizacao)
    :   Insumo(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo)
{
	
    this->dosagem = dosagem;
    this->administracao = administracao;
    this->disponibilizacao = disponibilizacao;
}
	
Medicamento::~Medicamento()
{
	cout << "Deletando Medicamento" << endl;
}