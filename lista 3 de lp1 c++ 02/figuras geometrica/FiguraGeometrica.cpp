#include "FiguraGeometrica.hpp"  
	
FiguraGeometrica::FiguraGeometrica(int tipo)
{
    this->tipo = tipo;
    nome = "";
}
FiguraGeometrica::~FiguraGeometrica() {
	
}
float FiguraGeometrica::calcularArea() {
    return 0;
}
void FiguraGeometrica::lerAtributosArea() {

}
std::string FiguraGeometrica::getNome() {
    return nome;
}