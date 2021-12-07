#ifndef CASA_H
#define CASA_H
#pragma once
	
#include "Imovel.hpp"

class Casa : public Imovel{
	private:
		int numerPav, numeroQ;
		float areaTer, areaConst;

	public:
		Casa();
		void exibeAtributos();
		void lerAtributos();

};
#endif