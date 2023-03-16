#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

using std::string;

class Empregado{
    public:

    Empregado(string, string, double);

    void SetNome(string);
    string GetNome();

    void SetSobrenome(string);
    string GetSobrenome();

    void SetSalario(double);
    double GetSalario();

    private:

    string nome, sobrenome;
    double salario;

};




#endif