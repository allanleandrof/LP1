#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H
#pragma once
	
#include <string>

class OrcamentoEstouradoException  
{
	private:
		double valor;
	public:
		OrcamentoEstouradoException(double valorTotal);
		~OrcamentoEstouradoException();
		std::string getMessage();

};
#endif