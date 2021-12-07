#include <iostream>
#include <string>
#include "Funcionario.hpp"
#include "Consultor.hpp"

using namespace std;

int main(void) { 
    Funcionario fun;
    Consultor con;
    int matricula;
    string nome;
    float salario;

    cin >> matricula;
    cin.ignore();
    getline(cin, nome);
    cin >> salario;

    fun.setMatricula(matricula);
    fun.setNome(nome);
    fun.setSalario(salario);

    cin >> matricula;
    cin.ignore();
    getline(cin, nome);
    cin >> salario;

    con.setMatricula(matricula);
    con.setNome(nome);
    con.setSalario(salario);

    cout << fun.getMatricula() << " - " << fun.getNome() << " - " << fun.getSalario() << endl;
    cout << con.getMatricula() << " - " << con.getNome() << " - " << con.getSalario() << endl;


    return 0;
}