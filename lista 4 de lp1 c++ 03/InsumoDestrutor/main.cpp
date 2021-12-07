#include "Local.hpp"
#include "Vacina.hpp"
#include "Medicamento.hpp"
#include "EPI.hpp"

int main(void) {
    Local obj;
    string nome, dtVencimento, nomeFabricante, tipoInsumo, tipo, descricao;
    string dosagem, administracao, disponibilizacao, tipoV;
	int quantidade, valorUnitario, quantDoses, intervalo;

    getline(cin, nome);
    cin >> quantidade;
    cin >> valorUnitario;
    cin.ignore();
    getline(cin, dtVencimento);
    getline(cin, nomeFabricante);
    cin >> tipoInsumo;
    cin.ignore();
    getline(cin, tipoV);
    cin >> quantDoses;
    cin >> intervalo;
    cin.ignore();

    obj.addInsumoArr(new Vacina(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo, tipoV, quantDoses, intervalo), 0);
    obj.addInsumoVec(new Vacina(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo, tipoV, quantDoses, intervalo));

    getline(cin, nome);
    cin >> quantidade;
    cin >> valorUnitario;
    cin.ignore();
    getline(cin, dtVencimento);
    getline(cin, nomeFabricante);
    cin >> tipoInsumo;
    cin.ignore();
    getline(cin, dosagem);
    getline(cin, administracao);
    getline(cin, disponibilizacao);

    obj.addInsumoArr(new Medicamento(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo, dosagem, administracao, disponibilizacao), 1);
    obj.addInsumoVec(new Medicamento(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo, dosagem, administracao, disponibilizacao));

    getline(cin, nome);
    cin >> quantidade;
    cin >> valorUnitario;
    cin.ignore();
    getline(cin, dtVencimento);
    getline(cin, nomeFabricante);
    cin >> tipoInsumo;
    cin.ignore();
    getline(cin, tipo);
    getline(cin, descricao);

    obj.addInsumoArr(new EPI(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo, tipo, descricao), 2);
    obj.addInsumoVec(new EPI(nome, quantidade, valorUnitario, dtVencimento, nomeFabricante, tipoInsumo, tipo, descricao));


    return 0;
}