#include "CPF.h"
#include <iostream>

using std::cout;
using std::endl;

int main(){
    string nome, cpf;

    nome = "pessoa";
    cpf = "11111111112";

    CPF c(nome, cpf);

    cout << "Testando o objeto com os valores de inicializacao:" << endl;
    c.Apresentar();

    nome = "pessoa 1";
    cpf = "94902280442";

    c.SetNome(nome).SetCpf(cpf);

    cout << "Testando os valores alterados: " << endl;
    c.Apresentar();

    c.SetCpf("11111111111");

    cout << "Testando com todos os  numeros do cpf iguais" << endl;
    c.Apresentar();

    return 0;
}