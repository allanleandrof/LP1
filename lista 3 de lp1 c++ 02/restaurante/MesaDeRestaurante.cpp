#include "MesaDeRestaurante.hpp"  

#include <iostream>
	
MesaDeRestaurante::MesaDeRestaurante()
{
	
}
	
void MesaDeRestaurante::adicionarPedido(Pedido* p, int indMesa){
    bool incremente = false;
    
    for (int i = 0; i < pedidos.size(); i++) {
        if (pedidos[i]->getDescricao() == p->getDescricao()) {
            pedidos[i]->incQuant(p->getQuant());
        }
        
    }
    
    if (!incremente)
        pedidos.push_back(p);
}

void MesaDeRestaurante::zeraPedidos(){
    for (int i = 0; i < pedidos.size(); i++) {
        delete pedidos[i];
        
    }
    pedidos.clear();
}

float MesaDeRestaurante::calculaTotal(){
    float total = 0;
    for (int i = 0; i < pedidos.size(); i++) {
        total += pedidos[i]->getTotal();
        
    }

    return total;
}

void MesaDeRestaurante::exibeConta(){
    for (int i = 0; i < pedidos.size(); i++) {
        std::cout << pedidos[i]->getNumero() << " . " << pedidos[i]->getDescricao() << " . " <<
         pedidos[i]->getQuant() << " . " << pedidos[i]->getPreco() << " - R$ " << pedidos[i]->getTotal() << std::endl; 
        
    }

    std::cout << "Total: R$ " << calculaTotal() << std::endl;
}