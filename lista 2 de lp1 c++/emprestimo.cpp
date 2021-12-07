/**
==========================================================================
 Problema:  Empréstimo pode ser concedido?
 Autor:     Allan Leandro Fernandes
==========================================================================
*/
#include <iostream>

using namespace std;

int main(void){
    float salario, emprestimo, prestacoes;      //Variáveis que irão guarda os valores digitados pelo teclado

    cin >> salario >> emprestimo >> prestacoes;

    while (1){                      //Os whiles infinitos servirão para colocar valores positivos em todas variáveis
        if (prestacoes <= 0){
            cin >> prestacoes;
        }else {
            break;
        }

    }

    while (1){
        if (emprestimo <= 0){
            cin >> emprestimo;
        }else {
            break;
        }

    }

    while (1){
        if (salario <= 0){
            cin >> salario;
        }else {
            break;
        }

    }

    if (emprestimo / prestacoes > 0.3 * salario){               
        cout << "Emprestimo nao pode ser concedido" << endl;
    }else {
        cout << "Emprestimo pode ser concedido" << endl;
    }

    return 0;
}
