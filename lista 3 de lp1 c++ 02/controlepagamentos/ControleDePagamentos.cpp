#include "ControleDePagamentos.hpp"  
	
ControleDePagamentos::ControleDePagamentos(){
	
}

float ControleDePagamentos::calculaTotalDePagamentos(){
    float totalPago = 0;

    for (int i = 0; i < XXX; i++){
        totalPago += pagamentos[i].getValorPagamento();

    }

    return totalPago;
}


void ControleDePagamentos::setPagamento(Pagamento p, int index){
    pagamentos[index] = p;
}


Pagamento ControleDePagamentos::getPagamento(int pos){
    return pagamentos[pos];
}

int ControleDePagamentos::getIndexFuncionario(std::string nomeFuncionario){
    for (int i = 0; i < XXX; i++){
        if (pagamentos[i].getNomeDoFuncionario().find(nomeFuncionario) != std::string::npos){
            return i;
        }
    }

    return -1;
}