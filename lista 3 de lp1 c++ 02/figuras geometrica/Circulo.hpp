#ifndef CIRCULO_H
#define CIRCULO_H
#pragma once

#include "FiguraGeometrica.hpp"
	
class Circulo  : public FiguraGeometrica {
	private:
		float raio;

	public:
		Circulo(int tipo);
		
		float calcularArea();
		void lerAtributosArea();

};
#endif