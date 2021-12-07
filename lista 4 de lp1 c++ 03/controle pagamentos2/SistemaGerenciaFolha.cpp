#include "SistemaGerenciaFolha.hpp"  
#include "FuncionarioNaoExisteException.hpp"
#include "OrcamentoEstouradoException.hpp"
#include <string>
	
SistemaGerenciaFolha::SistemaGerenciaFolha()
{
	
}

SistemaGerenciaFolha::SistemaGerenciaFolha(double valorMax)
{
	orcamentoMax = valorMax;
}
	
SistemaGerenciaFolha::~SistemaGerenciaFolha()
{
	
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string nome){
    for (int i = 0; i < funcionarios.size(); i++)
    {
        if (funcionarios[i]->getNome().find(nome) != std::string::npos)
        {
            return funcionarios[i]->calcularSalario();
        }
        
    }
    
    throw FuncionarioNaoExisteException(nome);

    return 0;
}
double SistemaGerenciaFolha::calculaValorTotalFolha(){
    double valorTotal = 0;

    for (int i = 0; i < funcionarios.size(); i++)
    {
        valorTotal += funcionarios[i]->calcularSalario();
        
    }

    if (valorTotal > orcamentoMax){  
        throw OrcamentoEstouradoException(valorTotal);

    }

    return valorTotal;    
}

void SistemaGerenciaFolha::setFuncionarios(Funcionario* func){
    funcionarios.push_back(func);
}