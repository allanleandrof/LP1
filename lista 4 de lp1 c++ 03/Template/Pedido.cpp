#include "Pedido.hpp"  
#include <streambuf>
#include <strstream>
#include <sstream>
	
Pedido::Pedido(float valor, int quant)
{
	valorUnitario = valor;
    quantidade = quant;
}
	
Pedido::~Pedido()
{
	
}

float Pedido::getTotal(){
    return valorUnitario/quantidade;
}
std::string Pedido::toString(){
    std::strstream sout;

    sout << "R$ " << valorUnitario << ", quant: " << quantidade << ", total: R$ " << getTotal();

    return sout.str();
}