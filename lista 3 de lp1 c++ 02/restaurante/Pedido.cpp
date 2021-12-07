#include "Pedido.hpp"  
	
Pedido::Pedido()
{
	numero = 0;
    quant = 0;
    preco = 0;
}
	
Pedido::Pedido(int n, std::string d, int q, float p)
{
	numero = n;
    descricao = d;
    quant = q;
    preco = p;
}

float Pedido::getTotal(){
    return quant * preco;
}

int Pedido::getNumero(){
    return numero;
}

std::string Pedido::getDescricao(){
    return descricao;
}

int Pedido::getQuant(){
    return quant;
}

float Pedido::getPreco(){
    return preco;
}

void Pedido::incQuant(int q){
    quant += q;
}