#include "Endereco.hpp"  
	
Endereco::Endereco(std::string rua, std::string numero, std::string bairro, std::string cidade, std::string estado, std::string CEP) {
	this->rua = rua;
    this->numero = numero;
    this->bairro = bairro;
    this->cidade = cidade;
    this->estado = estado;
    this->CEP = CEP;
}
	
Endereco::Endereco() {
	
}

std::string Endereco::toString() {
    return rua + "," + numero + "," + bairro + "." + cidade + "." + estado + "." + CEP;
}

