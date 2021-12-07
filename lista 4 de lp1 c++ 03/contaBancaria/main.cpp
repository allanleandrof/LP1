#include <iostream>
#include "Conta.hpp"
#include "ContaEspecial.hpp"

using namespace std;

int main(void) {
    Conta c;
    ContaEspecial a;
    string nome;
    int conta;
    double salarioMensal;
    double deposito;
    double saque;

    getline(cin, nome);
    cin >> conta;
    cin >> salarioMensal;
    cin >> deposito;
    cin >> saque;
    cin.ignore();

    c = Conta(nome, conta, salarioMensal);
    c.depositar(deposito);
    c.sacar(saque);
    c.saldoTotalDisponivel();

    cout << c.getNomeCliente() << ", " << "cc: " << c.getNumeroConta() << ", salário " << c.getSalarioMensal() << ", saldo total disponível: R$ " << c.getSaldoTotal() << endl;

    getline(cin, nome);
    cin >> conta;
    cin >> salarioMensal;
    cin >> deposito;
    cin >> saque;

    a = ContaEspecial(nome, conta, salarioMensal);
    a.depositar(deposito);
    a.sacar(saque);
    a.saldoTotalDisponivel();

    cout << a.getNomeCliente() << ", " << "cc: " << a.getNumeroConta() << ", salário " << a.getSalarioMensal() << ", saldo total disponível: R$ " << a.getSaldoTotal() << endl;

    return 0;
}