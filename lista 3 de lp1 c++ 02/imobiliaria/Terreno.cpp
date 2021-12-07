#include "Terreno.hpp"  
	
Terreno::Terreno()
    : Imovel() {
	nome = "Terreno";
    tipo = 3;
}
	
void Terreno::exibeAtributos(){
    Imovel::exibeAtributos();
    std::cout << area << "m2 de área de terreno. R$ " << valor << "." << std::endl;
}

void Terreno::lerAtributos(){
	Imovel::lerAtributos();
    std::cin >> area;
}