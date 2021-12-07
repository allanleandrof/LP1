#ifndef LIVRO_H
#define LIVRO_H
#pragma once
	
#include <string>	

class Livro  
{
	private:
		std::string titulo;
		int totalPaginas;

	public:
		Livro(std::string titulo, int paginas);
		int getTotal();
		std::string toString();
		~Livro();

};
#endif