#ifndef TRIANGULO_H
#define TRIANGULO_H
#pragma once

#include "FiguraGeometrica.hpp"
	
class Triangulo : public FiguraGeometrica {
	private:
		float base, alt;

	public:
		Triangulo(int tipo);
		
		float calcularArea();
		void lerAtributosArea();

};
#endif