#include "ContaBanco.h"
#include <iostream>

void ContaBanco::SetSaldo(double s){
    saldo = s;
}

ContaBanco::ContaBanco(double s){
    if (s >= 0){
    SetSaldo(s);
    }else{saldo = 0;}
    
}

void ContaBanco::Creditar(double c){
    saldo += c;
}

void ContaBanco::Debitar(double d){
    VerificarDebito(d);
}

double ContaBanco::GetSaldo(){
    return saldo;
}

void ContaBanco::VerificarDebito(double d){
    if (d <= saldo){
        saldo -= d;
    }else{std::cout << "Nao tem saldo suficiente para a retirada." << std::endl;}
}