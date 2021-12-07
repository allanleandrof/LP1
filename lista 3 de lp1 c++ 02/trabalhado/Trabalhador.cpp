#include "Trabalhador.hpp"  
	
Trabalhador::Trabalhador() {
	salario = 0;
}
	
Trabalhador::~Trabalhador(){
	
}


void Trabalhador::setNome(std::string nome) {
    this->nome = nome;
}

void Trabalhador::setSalario(int salario){
    this->salario = salario;
}


std::string Trabalhador::getNome() {
    return nome;
}

float Trabalhador::getSalario() {
    return salario;
}