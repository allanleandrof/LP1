#ifndef PEDIDO_H
#define PEDIDO_H
#pragma once

#include <string>
	
class Pedido  
{
	private:
		float valorUnitario;
		int quantidade;
	public:
		Pedido(float valor, int quant);
		float getTotal();
		std::string toString();
		~Pedido();

};
#endif