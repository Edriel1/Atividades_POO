#include <iostream>
#include "Data.h"

using std::cout;
using std::endl;

int main(){

    Data d1(10, 10, 2000), d2(10, 30, 2000);

    cout << "imprimindo o valor do objeto d1 com os valores da inicializacao:" << endl;
    d1.MostrarData();
    cout << "imprimindo o valor do objeto d2 com os valores da inicializacao:" << endl;
    d2.MostrarData();

    d1.SetDia(1).SetMes(11).SetAno(2001);
    d2.SetDia(5).SetMes(10).SetAno(2001);

    cout << endl << "imprimindo o valor do objeto d1 com os valores depois da alteracao:" << endl;
    d1.MostrarData();
    cout << "imprimindo o valor do objeto d2 com os valores depois de alteracao:" << endl;
    d2.MostrarData();

    return 0;
}