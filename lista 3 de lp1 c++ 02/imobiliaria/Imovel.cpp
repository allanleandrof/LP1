#include "Imovel.hpp"
	
Imovel::Imovel()
{
	
}
	
Imovel::~Imovel()
{
	
}

void Imovel::exibeAtributos(){
    std::cout << nome << " para " << modo << ". ";
}

void Imovel::lerAtributos(){
    std::cin >> valor;
    std::cin.ignore();
    std::getline(std::cin, modo);
    
}