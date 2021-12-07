#include <iostream>
#include <string>
#include "ControleDePagamentos.hpp"
#include "Pagamento.hpp"

using namespace std;

int main(void){
    int quant, indic;
    std:string nome;
    float pagamento;
    ControleDePagamentos pagam;
    Pagamento pa;

    cin >> quant;

    for (int i = 0; i < quant; i++){
        cin >> pagamento;
        cin.ignore();
        getline(cin, nome);

        pa.setValorPagamento(pagamento);
        pa.setNomeDoFuncionario(nome);
        pagam.setPagamento(pa, i);
    }

    getline(cin, nome);
    indic = pagam.getIndexFuncionario(nome);

    if (indic != -1){
        cout << pagam.getPagamento(indic).getNomeDoFuncionario() << ": R$ " << pagam.getPagamento(indic).getValorPagamento() << endl;
        cout << "Total: " << pagam.calculaTotalDePagamentos() << endl;

    }else {
        cout << nome << " não encontrado(a)." << endl;
        cout << "Total: " << pagam.calculaTotalDePagamentos() << endl;
    }

    return 0;
}