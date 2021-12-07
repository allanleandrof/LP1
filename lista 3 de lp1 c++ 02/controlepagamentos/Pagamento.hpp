#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#pragma once

#include <string>
	
class Pagamento {
	private:
		float valorPagamento;
		std::string nomeDoFuncionario;

	public:
		Pagamento();
		~Pagamento();

		void setValorPagamento(float valorPagamento);
		void setNomeDoFuncionario(std::string nomeDoFuncionario);

		float getValorPagamento();
		std::string getNomeDoFuncionario();

};
#endif