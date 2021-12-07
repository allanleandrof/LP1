#include "Apartamento.hpp"  
	
Apartamento::Apartamento() 
	: Imovel() {
	nome = "Apartamento"; 
	tipo = 2;
}

void Apartamento::exibeAtributos(){
	Imovel::exibeAtributos();
	std::cout << area << "m2 de área, " <<  quartos << "quartos, " << andar << "andar(es), " << 
	condominioValor << "de condomínio, " << vagasGaragem << "vaga(s) de garagem. R$ " << valor << std::endl;
}

void Apartamento::lerAtributos(){
	Imovel::lerAtributos();
    std::cin >> area;
	std::cin >> quartos;
	std::cin >> andar;
	std::cin >> condominioValor;
	std::cin >> vagasGaragem;
}