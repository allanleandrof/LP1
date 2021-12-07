#ifndef DATA_H
#define DATA_H
#pragma once
	
class Data {
	private:
		int dia;
		int mes;
		int ano;

	public:
		Data();
		void setDia(int d);
		void setMes(int m);
		void setAno(int a);
		int getDia();
		int getMes();
		int getAno();

};
#endif