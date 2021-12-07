#include <iostream>
#include "Conta.hpp"
#include "ContaCorrente.hpp"
#include "ContaEspecial.hpp"
#include "Poupanca.hpp"

using namespace std;

int main(void){
    Conta *a, *b, *c;

    string nome[3];
    int numero[3];
    double salario[2], deposito[3], saque[3];

    for (int i = 0; i < 3; i++){
        getline(cin, nome[i]);
        cin >> numero[i];

        if (i < 2){
            cin >> salario[i];
        }

        cin >> deposito[i];
        cin >> saque[i];
        cin.ignore();
    }

    a = new ContaCorrente(nome[0], numero[0], salario[0]);
    b = new ContaEspecial(nome[1], numero[1], salario[1]);
    c = new Poupanca(nome[2], numero[2]);  

    cout << a->getNomeCliente() << ", cc: " << a->getNumero() << ", salário " << a->getSalario() << ", ";
    a->depositar(deposito[0]);
    a->sacar(saque[0]);
    cout << "saldo total disponível: R$ " << a->saldoTotalDisponivel() << endl;
    cout << b->getNomeCliente() << ", cc: " << b->getNumero() << ", salário " << b->getSalario() << ", ";
    b->depositar(deposito[1]);
    b->sacar(saque[1]);
    cout << "saldo total disponível: R$ " << b->saldoTotalDisponivel() << endl;
    cout << c->getNomeCliente() << ", cc: " << c->getNumero() << ", ";
    c->depositar(deposito[2]);
    c->sacar(saque[2]);
    cout << "saldo total disponível: R$ " << c->saldoTotalDisponivel() << endl;

    return 0;
}