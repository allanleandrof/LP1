#include "controle.hpp"  
#include <iostream>
	
controle::controle()
{
	
}
	
void controle::setDespesa(despesas de, int posi){
    despesa[posi] = de;
}
despesas controle::getDespesa(int posi){
    return despesa[posi];
}
float controle::CalculaTotalDeDespesas(){
    int i;
    float total = 0;

    for (i = 0; i < 100; i ++){
        total += despesa[i].getValor();
    }

    return total;
}
float controle::CalculaTotalDeDespesas(std::string tipos){
    int i;
    float total = 0;

    for (i = 0; i < 100; i ++){
        if(despesa[i].getTipoDeGasto() == tipos){
            total += despesa[i].getValor();
        }
    }

    return total;
}
bool controle::ExisteDespesaDoTipo(std::string tipos){
    int i;

    for (i = 0; i < 100; i ++){
        if(despesa[i].getTipoDeGasto() == tipos){
            return true;
        }
    }

    return false;

}