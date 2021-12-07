#include "Horista.hpp"  

Horista::Horista()
{
	
}

Horista::Horista(double salarioPorHora, double horasTrabalhas)
{
	setSalarioPorHora(salarioPorHora);
    setHorasTrabalhadas(horasTrabalhas);
}
	
double Horista::calcularSalario(){
    double salario;

    if (horasTrabalhas <= 40){
        salario = (horasTrabalhas * salarioPorHora) * 4;
        return salario; 
    }else {
        salario = ((40 * salarioPorHora) + (1.5 * salarioPorHora * (horasTrabalhas - 40))) * 4;
        return salario;
    }
}

void Horista::setSalarioPorHora(double salarioPorHora){
    this->salarioPorHora = salarioPorHora;
}
void Horista::setHorasTrabalhadas(double horasTrabalhas){
    this->horasTrabalhas = horasTrabalhas;
}
