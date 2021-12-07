#include <iostream>
#include "Data.hpp"

using namespace std;

int main(void){
    Data Dia;
    int dia, mes, ano;

    cin >> dia;
    cin >> mes;
    cin >> ano; 

    Dia.setDia(dia);
    Dia.setMes(mes);
    Dia.setAno(ano);

    cout << Dia.getDia() << "de "; 

    switch (Dia.getMes()) {
    case 1:
        cout << "Janeiro " << "de " << Dia.getAno() << endl;
        break;
    case 2:
        cout << "Fevereiro " << "de " << Dia.getAno() << endl;
        break;
    case 3:
        cout << "Março " << "de " << Dia.getAno() << endl;
        break;
    case 4:
        cout << "Abril " << "de " << Dia.getAno() << endl;
        break;
    case 5:
        cout << "Maio " << "de " << Dia.getAno() << endl;
        break;
    case 6:
        cout << "Junho " << "de " << Dia.getAno() << endl;
        break;
    case 7:
        cout << "Julho " << "de " << Dia.getAno() << endl;
        break;
    case 8:
        cout << "Agosto " << "de " << Dia.getAno() << endl;
        break;
    case 9:
        cout << "Setembro " << "de " << Dia.getAno() << endl;
        break;
    case 10:
        cout << "Outubro " << "de " << Dia.getAno() << endl;
        break;
    case 11:
        cout << "Novembro " << "de " << Dia.getAno() << endl;
        break;
    case 12:
        cout << "Dezembro " << "de " << Dia.getAno() << endl;
        break;                                            
    default:
        cout << "Indefinido " << "de " << Dia.getAno() << endl;
        break;
    }



    return 0;
}