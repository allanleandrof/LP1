/**
==========================================================================
 Problema:  Retirar repetidos
 Autor:     Allan Leandro Fernandes
==========================================================================
*/
#include <iostream>

using namespace std;

int main(void){
    int n, i, j;        //n vai guarda a quantidade de numeros dentro do vetor - i e j irão ser usados nos fors

    cin >> n;

    int num[n];     //Vetor que vai guarda os valores digitados pelo teclado

    for (i = 0; i < n; i++){
        cin >> num[i];
    }

    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (num[i] == num[j]){
                num[j] = 0;
            }
        }
    }

    for (i = 0; i < n; i++){
        if (num[i] > 0){
            cout << num[i] << " ";
        }
    }

    return 0;
}
