#include <iostream>
#include <vector>
#include "Estatisticas.hpp"
#include "Livro.hpp"
#include "Pedido.hpp"

using namespace std;

int main(void){
    Estatisticas<Livro> eLivro;
    Estatisticas<Pedido> ePed;

    vector<Livro> livros;
    vector<Pedido> pedidos; 

    int N, quant, index;
    float preco;
    string titulo;

    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> preco;
        cin >> quant;
        pedidos.push_back(Pedido(preco, quant));
    }

    cin >> N;

    for (int i = 0; i < N; i++){
        cin.ignore();
        getline(cin, titulo);
        cin >> quant;
        livros.push_back(Livro(titulo, quant));
    }

    index = ePed.indexOfMaior(pedidos);
    cout << "Maior: " << pedidos[index].toString() << endl;
    index = ePed.indexOfMenor(pedidos);
    cout << "Menor: " << pedidos[index].toString() << endl;
    cout << "Média: " << ePed.media(pedidos) << endl;

    index = eLivro.indexOfMaior(livros);
    cout << "Maior: " << livros[index].toString() << endl;
    index = eLivro.indexOfMenor(livros);
    cout << "Menor: " << pedidos[index].toString() << endl;
    cout << "Média: " << eLivro.media(livros) << endl;

    return 0;
}