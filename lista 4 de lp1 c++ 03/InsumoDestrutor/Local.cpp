#include "Local.hpp"  
	
Local::Local()
{
	nome = "-";
    tipo = 0;
}
	
Local::~Local()
{
	cout << "Deletando Local" << endl;

    for (int i = 0; i < 3; i ++){
        delete insumosArr[i];
    }

    for (int i = 0; i < insumosVec.size(); i ++){
        delete insumosVec[i];
    }

    insumosVec.clear();
}

void Local::addInsumoArr(Insumo *in, int index){
    insumosArr[index] = in;
}

void Local::addInsumoVec(Insumo *in){
    insumosVec.push_back(in);
}