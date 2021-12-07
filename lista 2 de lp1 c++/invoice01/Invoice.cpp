#include "Invoice.hpp"  
	
Invoice::Invoice(){
	
}
	
int Invoice::getInvoiceAmount(){
    return qComprad * preco;
}