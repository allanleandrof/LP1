#include <iostream>
#include <string>
#include "TrabalhadorAssalariado.hpp"
#include "TrabalhadorPorHora.hpp"

using namespace std;

int main(void){
    int n;
    string nome;
    float salario, valorDaHora;

    cin >> n;

    int tipo[n], horasSemanais[n];
    TrabalhadorAssalariado ass[n];
    TrabalhadorPorHora hor[n];
    
    for (int i = 0; i < n; i++){
        cin >> tipo[i];
        cin.ignore();

        if (tipo[i] == 1) {
            getline(cin, nome);
            cin >> salario;
            cin.ignore();

            ass[i].setNome(nome);
            ass[i].setSalario(salario);
            cout << ass[i].getNome() << " - Semanal: R$ " << ass[i].calcularPagamentoSemanal() << " - Mensal: R$ " << ass[i].getSalario() << endl;
        }else if (tipo[i] == 2) {
            getline(cin, nome);
            cin >> valorDaHora;
            cin >> horasSemanais[i];
            cin.ignore();

            hor[i] = TrabalhadorPorHora(valorDaHora);
            hor[i].setNome(nome);
            cout << hor[i].getNome() << " - Semanal: R$ " << hor[i].calcularPagamentoSemanal(horasSemanais[i]) << " - Mensal: R$ " << hor[i].getSalario() << endl;
        }
    }


    return 0;
}