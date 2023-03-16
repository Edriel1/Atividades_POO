#include <iostream>
#include "ContaBanco.h"

int main(){
ContaBanco conta1(10000), conta2(632589);

std::cout << "Imprime o valor de inicializacao dos objetos." << std::endl;
std::cout << "R$" << conta1.GetSaldo() << std::endl;
std::cout << "R$" << conta2.GetSaldo() << std::endl << std::endl;

conta1.Creditar(100);
conta2.Creditar(1000);

std::cout << "Imprime o valor de inicializacao dos objetos, com um acrescimo de 100 no primeiro e 1000 no segundo." << std::endl;
std::cout << "R$" << conta1.GetSaldo() << std::endl;
std::cout << "R$" << conta2.GetSaldo() << std::endl << std::endl;

conta1.Debitar(15000);
conta2.Debitar(1000);

std::cout << "Imprime o valor dos objetos, com o valor anterior do primeiro e 1000 a menos no segundo." << std::endl;
std::cout << "R$" << conta1.GetSaldo() << std::endl;
std::cout << "R$" << conta2.GetSaldo() << std::endl << std::endl;


return 0;
}