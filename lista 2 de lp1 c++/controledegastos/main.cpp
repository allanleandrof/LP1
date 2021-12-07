#include <iostream>
#include "controle.hpp"
#include <string>

using namespace std;

int main(){
    string nome, pesqui, tipoDeGasto;
    float valor;
    int n, i;
    controle gastos;
    despesas d1;

    cin >> n;
    cin.ignore();

    for (i = 0; i < n; i++){
        getline(cin, nome);
        cin >> valor;
        cin.ignore();
        getline(cin, tipoDeGasto);

        d1.setNome(nome);
        d1.setValor(valor);
        d1.setTipoDeGasto(tipoDeGasto);
        gastos.setDespesa(d1, i);
    }

    getline(cin, pesqui);

    if (gastos.ExisteDespesaDoTipo(pesqui)){
        for (i = 0; i < n; i++){
            if (gastos.getDespesa(i).getTipoDeGasto() == pesqui){
                cout << gastos.getDespesa(i).getNome() << ", R$" << gastos.getDespesa(i).getValor() << endl;

            }
        }
    }else {
        cout << "Nenhuma despesa do tipo especificado" << endl;

    }

    cout << "Total: " << gastos.CalculaTotalDeDespesas(pesqui) << "/" << gastos.CalculaTotalDeDespesas() << endl;

    return 0;
}