#ifndef PEDIDO_H
#define PEDIDO_H
#pragma once

#include <string>

class Pedido  
{
	private:
		int numero;
		std::string descricao;
		int quant;
		float preco;

	public:
		Pedido();
		Pedido(int n, std::string d, int q, float p);
		float getTotal();

		int getNumero();
		std::string getDescricao();
		int getQuant();
		float getPreco();
		void incQuant(int q);

};
#endif