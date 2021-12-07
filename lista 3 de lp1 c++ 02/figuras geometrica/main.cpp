#include <iostream>

#include "Quadrado.hpp"
#include "Retangulo.hpp"
#include "Triangulo.hpp"
#include "Circulo.hpp"

int main(void){
    int tipo;
    Quadrado q = Quadrado(1);
    Retangulo r = Retangulo(2);
    Triangulo t = Triangulo(3);
    Circulo c = Circulo(4);

    while (1) {
        std::cin >> tipo;

        if (tipo == 0) break;

        switch (tipo) {
            case 1:
                q.lerAtributosArea();
                std::cout << q.getNome() << " de área " << q.calcularArea() << std::endl;
                break;
            case 2:
                r.lerAtributosArea();
                std::cout << r.getNome() << " de área " << r.calcularArea() << std::endl;
                break;
            case 3:
                t.lerAtributosArea();
                std::cout << t.getNome() << " de área " << t.calcularArea() << std::endl;
                break;
            case 4:
                c.lerAtributosArea();
                std::cout << c.getNome() << " de área " << c.calcularArea() << std::endl;
                break;
        
            default:
                break;
        }
    }
    



    return 0;
}