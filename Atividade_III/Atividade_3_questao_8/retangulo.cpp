#include "retangulo.h"

retangulo::retangulo(const float &l, const float &a){
    SetLargura(l);
    SetAltura(a);
}

retangulo &retangulo::SetLargura(const float &l){

    if(l > 0 and l < 20){
        largura = l;
    }else{largura = 1;}

    return *this;
}
float retangulo::GetLargura() const{
    return largura;
}

retangulo &retangulo::SetAltura(const float &a){
    if(a > 0 and a < 20){
        altura = a;
    }else{altura = 1;}

    return *this;
}
float retangulo::GetAltura() const{
    return altura;
}

float retangulo::CalculaArea() const{
    return largura * altura;
}
float retangulo::CalculaPerimetro ()const{
    return (2 * largura) + (2 * altura);
}
