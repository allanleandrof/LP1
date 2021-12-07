#include <iostream>
#include "pessoa.hpp"

using namespace std;

int main(void){
    int n, i;

    cin >> n;

    pessoa funci[n];

    for (i = 0; i < n; i++){
        getline(cin, funci[i].pNome);
        getline(cin, funci[i].sNome);
        cin >> funci[i].sMensal;

    }

    for (i = 0; i < n; i++){
        cout << funci[i].pNome << " " << funci[i].sNome << " - " << funci[i].sMensal << " - " << funci[i].getSalarioAnual() << endl;

    }


    return 0;

}