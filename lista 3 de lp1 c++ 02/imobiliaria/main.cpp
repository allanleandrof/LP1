#include <iostream>
#include "Casa.hpp"
#include "Terreno.hpp"
#include "Apartamento.hpp"

using namespace std;

int main(void){
    int n, tipo;
    Apartamento ap;
    Casa ca;
    Terreno te;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> tipo;

        switch (tipo) {
        case 1:
            ca.lerAtributos();
            ca.exibeAtributos();
            break;
        case 2:
            ap.lerAtributos();
            ap.exibeAtributos();
            break;
        case 3:
            te.lerAtributos();
            te.exibeAtributos();
            break;
        
        default:
            break;
        }
    }


    return 0;
}