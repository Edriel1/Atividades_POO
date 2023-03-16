#include "Cupom.h"

Cupom::Cupom(const string &id, const string &descricao, const int &quantidade, const float &preco) : id(id), descricao(descricao), quantidade(quantidade), preco(preco){};

Cupom &Cupom::SetId(const string &i){
    id = i;
    return *this;
}
string Cupom::GetId() const{
    return id;
}

Cupom &Cupom::SetDescricao(const string &d){
    descricao = d;
    return *this;
}
string Cupom::GetDescricao() const{
    return descricao;
}

Cupom &Cupom::SetQuantidade(const int &q){
    if(q <= 0){
        quantidade = 0;
    }else{
        quantidade = q;}
    return *this;
}
int Cupom::GetQuantidade() const{
    return quantidade;
}

Cupom &Cupom::SetPreco(const float &p){
    if(p <=0){
        preco = 0;
    }else{
        preco = p;}
    return *this;
}
float Cupom::GetPreco() const{
    return preco;
}

float Cupom::CalculaValor() const{
    return(GetPreco() * GetQuantidade());
}