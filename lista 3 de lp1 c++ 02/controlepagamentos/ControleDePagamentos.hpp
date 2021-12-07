#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#pragma once

#define XXX 100

#include "Pagamento.hpp"
	
class ControleDePagamentos {
	private:
		Pagamento pagamentos[XXX];

	public:
		ControleDePagamentos();
		float calculaTotalDePagamentos();

		void setPagamento(Pagamento p, int index);

		Pagamento getPagamento(int pos);
		int getIndexFuncionario(std::string nomeFuncionario);
		
};
#endif