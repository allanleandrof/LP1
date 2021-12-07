#include "Livro.hpp"  
	
Livro::Livro(std::string titulo, int paginas)
{
	this->titulo = titulo;
    totalPaginas = paginas;
}
	
Livro::~Livro()
{
	
}

int Livro::getTotal(){
    return totalPaginas;
}

std::string Livro::toString(){
    return titulo + ", páginas: " + std::to_string(totalPaginas);
}