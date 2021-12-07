#ifndef CONSULTOR_H
#define CONSULTOR_H
#pragma once
	
#include "Funcionario.hpp"

class Consultor : public Funcionario {
	public:
		Consultor();
		
		float getSalario();
		float getSalario(int percentual);

};
#endif