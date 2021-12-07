#include "Funcionario.hpp"  
	
Funcionario::Funcionario()
{
	
}
	
Funcionario::~Funcionario()
{
	
}

int Funcionario::getMatricula() {
    return matricula;
}

std::string Funcionario::getNome(){
    return nome;
}

float Funcionario::getSalario(){
    return salario;
}


void Funcionario::setMatricula(int matricula){
    this->matricula = matricula;
}

void Funcionario::setNome(std::string nome){
    this->nome = nome;
}

void Funcionario::setSalario(float salario){
    this->salario = salario;
}