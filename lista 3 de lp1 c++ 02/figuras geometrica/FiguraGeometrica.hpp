#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#pragma once

#include <string>
	
class FiguraGeometrica {
	protected:
		std::string nome;
		int tipo;

	public:
		FiguraGeometrica(int tipo);
		~FiguraGeometrica();
		
		float calcularArea();
		void lerAtributosArea();
		std::string getNome();

};
#endif