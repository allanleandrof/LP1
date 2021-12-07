#ifndef PESSOA_H
#define PESSOA_H
#pragma once

#include <string>
	
class pessoa {
	public:
	pessoa();
	std::string pNome;
	std::string sNome;
	int sMensal;
	int getSalarioAnual();

};
#endif