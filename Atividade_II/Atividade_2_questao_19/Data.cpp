#include "Data.h"
#include <iostream>

Data::Data(const int &dia, const int &mes, const int &ano) : dia(dia), mes(mes), ano(ano){
    SetMes(mes);
}

Data &Data::SetDia(const int &d){
    dia = d;
    return *this;
}
int Data::GetDia() const{
    return dia;
}


Data &Data::SetMes(const int &m){
    if(m > 1 and m < 12){
        mes = m;
    }else{mes = 1;}
    return  *this;
}
int Data::GetMes() const{
    return mes;
}

Data &Data::SetAno(const int &a){
    ano = a;
    return *this;
}
int Data::GetAno() const{
    return ano;
}

void Data::MostrarData() const{
    std::cout << dia << "/" << mes << "/" << ano << std::endl;
}