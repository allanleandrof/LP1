#ifndef QUADRADO_H
#define QUADRADO_H
#pragma once
	
#include "FiguraGeometrica.hpp"

class Quadrado : public FiguraGeometrica {
	private:
		float lado;

	public:
		Quadrado(int tipo);

		float calcularArea();
		void lerAtributosArea();



};
#endif