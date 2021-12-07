#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#pragma once

#include <exception>

#include <string>
	
class FuncionarioNaoExisteException : public std::exception 
{
	private:
		std::string nome;

	public:
		FuncionarioNaoExisteException(std::string nome);
		~FuncionarioNaoExisteException();
		std::string getMessage();

};
#endif