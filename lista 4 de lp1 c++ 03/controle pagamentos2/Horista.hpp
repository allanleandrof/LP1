#ifndef HORISTA_H
#define HORISTA_H
#pragma once

#include "Funcionario.hpp"

class Horista : public Funcionario 
{
	private:
		double salarioPorHora;
		double horasTrabalhas;

	public:
		Horista();
		Horista(double salarioPorHora, double horasTrabalhas);
		double calcularSalario();

		void setSalarioPorHora(double salarioPorHora);
		void setHorasTrabalhadas(double horasTrabalhas);


};
#endif