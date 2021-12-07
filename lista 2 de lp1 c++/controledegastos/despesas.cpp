#include "despesas.hpp"  
	
despesas::despesas(){
    valor = 0;
	
}
	
void despesas::setNome(std::string nom){
    nome = nom;
}
void despesas::setValor(float val){
    valor = val;
}
void despesas::setTipoDeGasto(std::string tipogasto){
    tipoDeGasto = tipogasto;
}
std::string despesas::getNome(){
    return nome;
}
float despesas::getValor(){
    return valor;
}
std::string despesas::getTipoDeGasto(){
    return tipoDeGasto;
}