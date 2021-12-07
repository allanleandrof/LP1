#ifndef RETANGULO_H
#define RETANGULO_H
#pragma once

#include "FiguraGeometrica.hpp"
	
class Retangulo : public FiguraGeometrica {
	private:
		float base, alt;

	public:
		Retangulo(int tipo);
		
		float calcularArea();
		void lerAtributosArea();

};
#endif