#include "retangulo.h"
#include <iostream>

using std::cout;
using std::endl;

int main(){
    retangulo r(10, 5);

    cout << "Testando os valores de inicializacao:" << endl;
    cout << "Largura: " << r.GetLargura() << endl;
    cout << "Altura: " << r.GetAltura() << endl;

    cout << endl << "Testando os calculos:" << endl;
    cout << "Area: " << r.CalculaArea() << endl;
    cout << "Perimetro: " << r.CalculaPerimetro() << endl;

    r.SetLargura(20).SetAltura(10);

    cout << endl << "Testando os valores alterados:" << endl;
    cout << "Largura: " << r.GetLargura() << endl;
    cout << "Altura: " << r.GetAltura() << endl;

    cout << endl << "Testando os calculos:" << endl;
    cout << "Area: " << r.CalculaArea() << endl;
    cout << "Perimetro: " << r.CalculaPerimetro() << endl;

    return 0;

}