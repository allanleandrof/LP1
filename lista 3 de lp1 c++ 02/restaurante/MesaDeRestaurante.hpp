#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#pragma once

#include <vector>
#include <Pedido.hpp>

class MesaDeRestaurante  
{
	private:
		std::vector<Pedido*> pedidos;

	public:
		MesaDeRestaurante();
		void adicionarPedido(Pedido* p, int indMesa);
		void zeraPedidos();
		float calculaTotal();
		void exibeConta();

};
#endif