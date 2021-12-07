#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#pragma once

#include <vector>
#include "MesaDeRestaurante.hpp"
	
class Restaurante  
{
	private:
		std::vector<MesaDeRestaurante> mesas = std::vector<MesaDeRestaurante>(10);

	public:
		Restaurante();
		void adicionarPedido(Pedido* p, int indMesa);
		float calculaTotalRestaurante();
		MesaDeRestaurante getMesa(int indMesa);

};
#endif