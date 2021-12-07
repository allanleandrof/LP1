#ifndef ICONTA_H
#define ICONTA_H
#pragma once
	
class IConta  
{
	private:

	public:
		IConta();
		~IConta();
		virtual void sacar(double valor) = 0;
		virtual void depositar(double valor) = 0;
		virtual void saldoTotalDisponivel() = 0;

};
#endif