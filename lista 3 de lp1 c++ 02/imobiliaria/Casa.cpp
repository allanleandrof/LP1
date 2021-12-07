#include "Casa.hpp"  
	
Casa::Casa()
    : Imovel() {
    nome = "Casa";
    tipo = 1;
}
	
void Casa::exibeAtributos(){
    Imovel::exibeAtributos();
    std::cout << numerPav << " pavimentos, " << numeroQ << " quartos, " << areaTer <<
     "m2 de área de terreno e " << areaConst << "m2 de área construída. R$ " << valor << "." << std::endl;
}

void Casa::lerAtributos(){
	Imovel::lerAtributos();
    std::cin >> numerPav;
    std::cin >> numeroQ;
    std::cin >> areaTer;
    std::cin >> areaConst;
}