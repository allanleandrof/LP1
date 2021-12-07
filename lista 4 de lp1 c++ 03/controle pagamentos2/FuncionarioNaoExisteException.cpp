#include "FuncionarioNaoExisteException.hpp"  

#include <iostream>
	
FuncionarioNaoExisteException::FuncionarioNaoExisteException(std::string nome)
{
	this->nome = nome;
}
	
FuncionarioNaoExisteException::~FuncionarioNaoExisteException()
{
	
}

std::string FuncionarioNaoExisteException::getMessage(){
    return "FuncionarioNaoExisteException " + nome + "\n";
}