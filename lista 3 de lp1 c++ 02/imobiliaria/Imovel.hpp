#ifndef IMOVEL_H
#define IMOVEL_H
#pragma once

#include <iostream>
#include <string>
	
class Imovel {
	protected:
		std::string nome;
		float valor;
		int tipo;
		std::string modo;

	public:
		Imovel();
		~Imovel();
		virtual void exibeAtributos() = 0;
		virtual void lerAtributos() = 0;

};
#endif