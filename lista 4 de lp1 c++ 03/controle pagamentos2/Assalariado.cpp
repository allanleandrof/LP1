#include "Assalariado.hpp" 

Assalariado::Assalariado()
{

}
	
Assalariado::Assalariado(double salario)
{
	setSalario(salario);
}
	
double Assalariado::calcularSalario(){
    return salario;    
}

void Assalariado::setSalario(double salario){
    this->salario = salario;
}