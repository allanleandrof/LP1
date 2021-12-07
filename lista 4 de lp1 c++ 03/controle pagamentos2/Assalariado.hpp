#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#pragma once

#include "Funcionario.hpp"
	
class Assalariado  : public Funcionario
{
	private:
		double salario;

	public:
		Assalariado();
		Assalariado(double salario);
		double calcularSalario();

		void setSalario(double salario);


};
#endif