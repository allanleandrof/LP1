#include <iostream>
#include "telefone.hpp"

using namespace std;

int main(){
    telefone n1, n2;

    getline(cin, n1.nome);
    cin >> n1.idade;
    cin >> n1.telefo;
    cin.ignore();
    getline(cin, n2.nome);
    cin >> n2.idade;
    cin >> n2.telefo;

    cout << n1.nome <<"," << n1.idade << "," << n1.telefo << endl;
    cout << n2.nome <<"," << n2.idade << "," << n2.telefo << endl;

    return 0;
}