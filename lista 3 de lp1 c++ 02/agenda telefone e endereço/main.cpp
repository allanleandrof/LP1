#include <iostream>
#include "Pessoa.hpp"

using namespace std;

int main(void){
    int quant;
    string rua, numero, bairro, cidade, estado, cep, nome, telefone;

    cin >> quant;
    cin.ignore();

    Pessoa pes[quant];

    for (int i = 0; i < quant; i++){
        getline(cin, nome);
        getline(cin, telefone);
        getline(cin, rua);
        getline(cin, numero);
        getline(cin, bairro);
        getline(cin, cidade);
        getline(cin, estado);
        getline(cin, cep);

        pes[i] = Pessoa(nome, Endereco(rua, numero, bairro, cidade, estado, cep), telefone);

    }

    for (int i = 0; i < quant; i++) {
        cout << pes[i].toString() << endl;
    }


    return 0;
}