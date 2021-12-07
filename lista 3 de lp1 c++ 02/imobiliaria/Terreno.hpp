#ifndef TERRENO_H
#define TERRENO_H
#pragma once

#include "Imovel.hpp"

class Terreno : public Imovel {
	private:
		float area;

	public:
		Terreno();
		void exibeAtributos();
		void lerAtributos();

};
#endif