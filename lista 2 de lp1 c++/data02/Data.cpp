#include "Data.hpp"
	
Data::Data()
{
	dia = 1;
    mes = 1;
    ano = 1;
}
	
void Data::setDia(int d){
    dia = d;
}
void Data::setMes(int m){
    mes = m;
}
void Data::setAno(int a){
    ano = a;
}
int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}