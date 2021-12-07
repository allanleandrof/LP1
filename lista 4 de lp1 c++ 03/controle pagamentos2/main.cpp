#include <iostream>
#include "SistemaGerenciaFolha.hpp"
#include "Assalariado.hpp"
#include "Horista.hpp"
#include "Comissionado.hpp"
#include "FuncionarioNaoExisteException.hpp"
#include "OrcamentoEstouradoException.hpp"
#include <string>

using namespace std;

int main(void){
    int matricula;
    double oMax, valor, horasT, percentual;
    string nome;

    cin >> oMax;

    SistemaGerenciaFolha sgf = SistemaGerenciaFolha(oMax);
    Funcionario *func;

    for (int i = 0; i < 3; i++)
    {
        cin.ignore();
        getline(cin, nome);
        cin >> matricula;
        cin >> valor;

        switch (i)
        {
            case 0:
                func = new Assalariado(valor);
                break;
            case 1:
                cin >> horasT;
                func = new Horista(valor, horasT);
                break;
            case 2:
                cin >> percentual;
                func = new Comissionado(valor, percentual);
                break;
            
            default:
                break;
        }

        func->setNome(nome);
        func->setMatricula(matricula);
        sgf.setFuncionarios(func);
    }

    string busca;
    cin.ignore();
    for (int i = 0; i < 3; i ++){
        getline(cin, busca);
        try{
            cout << sgf.consultaSalarioFuncionario(busca) << endl;
        }catch (FuncionarioNaoExisteException e) {
            cout << e.getMessage();
        }
        
    }

    try {
        cout << sgf.calculaValorTotalFolha() << endl;
    } catch (OrcamentoEstouradoException e) {
        cout << e.getMessage();
    }
    

    return 0;
}