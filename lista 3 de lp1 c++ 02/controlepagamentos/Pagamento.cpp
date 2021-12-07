#include "Pagamento.hpp"  
	
Pagamento::Pagamento(){
	valorPagamento = 0;

}
	
Pagamento::~Pagamento(){
	
}

void Pagamento::setValorPagamento(float valorPagamento){
    this->valorPagamento = valorPagamento;
}

void Pagamento::setNomeDoFuncionario(std::string nomeDoFuncionario){
    this->nomeDoFuncionario = nomeDoFuncionario;
}


float Pagamento::getValorPagamento(){
    return valorPagamento;
}

std::string Pagamento::getNomeDoFuncionario(){
    return nomeDoFuncionario;
}