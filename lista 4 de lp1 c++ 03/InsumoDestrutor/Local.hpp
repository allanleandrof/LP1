#ifndef LOCAL_H
#define LOCAL_H
#pragma once
	
#include "Insumo.hpp"	
#include <vector>

class Local  
{
	private:
		string nome;
		int tipo;
		Insumo* insumosArr[3];
		vector<Insumo *> insumosVec;

	public:
		Local();
		virtual ~Local();
		void addInsumoArr(Insumo *in, int index);
		void addInsumoVec(Insumo *in);

};
#endif