/**
==========================================================================
 Problema:  Sistema Inteligente - Identificação de Aves - Vídeo
 Autor:     Allan Leandro Fernandes
==========================================================================
*/
#include <iostream>

using namespace std;

int main(void){
    int a, p, d, v, n;      //Variáveis que irão guarda as informações de cada animal

    cin >> a;
    cin >> p;
    cin >> d;
    cin >> v;
    cin >> n;

    if (a == 0 && p == 1 && d == 0 && v == 1 && n == 1){        //Desvio para mostra na tela o animal certo
        cout << "coruja" << endl;
    }else if (a == 0 && p == 0 && d == 0 && v == 1 && n == 0){
        cout << "pardal" << endl;
    }else if (a == 0 && p == 0 && d == 1 && v == 1 && n == 0){
        cout << "galinha" << endl;
    }else if (a == 0 && p == 1 && d == 0 && v == 0 && n == 0){
        cout << "ema" << endl;
    }else if (a == 0 && p == 1 && d == 0 && v == 1 && n == 0){
        cout << "falcão" << endl;
    }else if (a == 1 && p == 0 && d == 0 && v == 1 && n == 0){
        cout << "pato" << endl;
    }else if (a == 1 && p == 1 && d == 0 && v == 0 && n == 0){
        cout << "pinguim" << endl;
    }else if (a == 1 && p == 1 && d == 0 && v == 1 && n == 0){
        cout << "gaivota" << endl;
    }else if (a == 1 && p == 1 && d == 0 && v == 1 && n == 1){
        cout << "garça" << endl;
    }else if (a == 0 && p == 0 && d == 0 && v == 0 && n == 0){
        cout << "avestruz" << endl;
    }

    return 0;
}
