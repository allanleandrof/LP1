#include "TrabalhadorAssalariado.hpp"  
	
TrabalhadorAssalariado::TrabalhadorAssalariado() {
	
}
	
TrabalhadorAssalariado::TrabalhadorAssalariado(float salario) {
    setSalario(salario);
}

float TrabalhadorAssalariado::calcularPagamentoSemanal() {
    return salario / 4;
}