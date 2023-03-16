#include <iostream>
using std::cout;
using std::endl;

#include "Carro.h"

//Implementação

Carro::Carro(string nome, int ano1)
{ //modificação 1
  setMarca(nome);
  setAno(ano1);
}

void Carro::setMarca(string nome)
{ //modificação 2
  if (nome == "")
    marca = "\"Sem Marca\"";
  else if (nome.length() > 10)
    marca = nome.substr(0,10);
  else
    marca = nome;
}

void Carro::setAno(int ano1){

  if(ano1 <= 2023){
    ano = ano1;
  }}

int Carro::getAno(){
  return ano;}
  
string Carro::getMarca()
{
  return marca;
}

void Carro::displayMessage()
{
  std::cout << "Ola, eu sou um carro da marca " << getMarca() << ", do ano: "  << getAno() << endl;
}
