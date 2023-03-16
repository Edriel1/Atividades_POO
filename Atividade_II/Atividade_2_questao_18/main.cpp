#include "Empregado.h"
#include <iostream>

using std::cout;
using std::endl;

void imprimi_informacoes(string, string, double);
int main(){

    Empregado e1("pessoa", "teste", 1000), e2("teste", "pessoa", 10000);

    cout << "Infomacoes de inicialiazacao do primeiro funcionario:" << endl;
    imprimi_informacoes(e1.GetNome(), e1.GetSobrenome(), e1.GetSalario());

    cout << "Infomacoes de inicialiazacao do segundo funcionario:" << endl;
    imprimi_informacoes(e2.GetNome(), e2.GetSobrenome(), e2.GetSalario());

    e1.SetNome("outro");
    e1.SetSobrenome("test");
    e1.SetSalario((e1.GetSalario() / 10) + e1.GetSalario());

    e2.SetNome("outro");
    e2.SetSobrenome("test");
    e2.SetSalario((e2.GetSalario() / 10) + e2.GetSalario());

    cout << "Infomacoes alteradas do primeiro funcionario com um aumento no salario de mais 10%:" << endl;
    imprimi_informacoes(e1.GetNome(), e1.GetSobrenome(), e1.GetSalario());

    cout << "Infomacoes alteradas do segundo funcionario com um aumento no salario de mais 10%:" << endl;
    imprimi_informacoes(e2.GetNome(), e2.GetSobrenome(), e2.GetSalario());
    
    return 0;
}

void imprimi_informacoes(string n, string s, double v){
    cout << "Nome: " << n << endl << "Sobrenome: " << s << endl << "Salario: " << v << endl;
}