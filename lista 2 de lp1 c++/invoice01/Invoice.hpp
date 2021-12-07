#ifndef INVOICE_H
#define INVOICE_H
#pragma once

#include <string>
	
class Invoice  {
	public:
		Invoice();
		int num;
		std::string Descri;
		int qComprad;
		float preco;
		int getInvoiceAmount();
		

};
#endif