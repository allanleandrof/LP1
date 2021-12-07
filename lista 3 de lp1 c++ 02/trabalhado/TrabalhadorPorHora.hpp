#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#pragma once
	
#include "Trabalhador.hpp"

class TrabalhadorPorHora : public Trabalhador {
	private:
		int valorDaHora;

	public:
		TrabalhadorPorHora();
		TrabalhadorPorHora(int valorDaHora);
		float calcularPagamentoSemanal(int horasSemanais);
		void setValorDaHora(int valorDaHora);
		

};
#endif