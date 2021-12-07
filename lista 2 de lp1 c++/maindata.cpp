#include <iostream>
#include "Data.hpp"

using namespace std;

int main(void){
    Data d1;

    cin >> d1.dia >> d1.mes >> d1.ano;

    cout << d1.dia << "/" << d1.mes << "/" << d1.ano << endl;

    return 0;
}