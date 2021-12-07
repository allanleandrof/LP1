#include <iostream>
#include "Invoice.hpp"

using namespace std;

int main(void){
    Invoice fatura1, fatura2;

    cin >> fatura1.num;
    cin.ignore();
    getline(cin, fatura1.Descri);
    cin >> fatura1.qComprad;
    cin >> fatura1.preco;

    cin >> fatura2.num;
    cin.ignore();
    getline(cin, fatura2.Descri);
    cin >> fatura2.qComprad;
    cin >> fatura2.preco;

    cout << fatura1.num << " - " << fatura1.Descri << " - ";

    if (fatura1.qComprad < 0){
        cout << "0" << " - ";
    }else {
        cout << fatura1.qComprad << " - ";
    }

    if (fatura1.preco < 0){
        cout << "0.0." << " - ";
    }else {
        cout << fatura1.preco << " - ";
    }

    cout << fatura1.getInvoiceAmount() << endl;

    cout << fatura2.num << " - " << fatura2.Descri << " - ";

    if (fatura2.qComprad < 0){
        cout << "0" << " - ";
    }else {
        cout << fatura2.qComprad << " - ";
    }

    if (fatura2.preco < 0){
        cout << "0.0." << " - ";
    }else {
        cout << fatura2.preco << " - ";
    }

    cout << fatura2.getInvoiceAmount() << endl;

    


    return 0;
}