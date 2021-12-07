#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#pragma once
	
#include "Trabalhador.hpp"

class TrabalhadorAssalariado : public Trabalhador {
	public:
		TrabalhadorAssalariado();
		TrabalhadorAssalariado(float salario);
		float calcularPagamentoSemanal();
		
};
#endif