#include "TrabalhadorPorHora.hpp"  
	
TrabalhadorPorHora::TrabalhadorPorHora() {
	
}
	
TrabalhadorPorHora::TrabalhadorPorHora(int valorDaHora) {
	setValorDaHora(valorDaHora);
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais) {
    float salarioSemanal;

    if (horasSemanais <= 40){
        salarioSemanal = valorDaHora * horasSemanais;
    }else {
        salarioSemanal = (valorDaHora * 40) + (valorDaHora * ((horasSemanais - 40) * 1.5));
    }

    salario = salarioSemanal * 4;

    return salarioSemanal;
}

void TrabalhadorPorHora::setValorDaHora(int valorDaHora) {
    this->valorDaHora = valorDaHora;
}