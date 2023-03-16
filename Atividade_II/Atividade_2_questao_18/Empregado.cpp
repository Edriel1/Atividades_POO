#include "Empregado.h"

Empregado::Empregado(string n, string s, double v){
    SetNome(n);
    SetSobrenome(s);
    SetSalario(v);
}

void Empregado::SetNome(string n){
    nome = n;
}

string Empregado::GetNome(){
    return nome;
}

void Empregado::SetSobrenome(string s){
    sobrenome = s;
}

string Empregado::GetSobrenome(){
    return sobrenome;
}

void Empregado::SetSalario(double v){
    if(v >= 0){
        salario = v;
    }else{salario = 0;}
}

double Empregado::GetSalario(){
    return salario;
}