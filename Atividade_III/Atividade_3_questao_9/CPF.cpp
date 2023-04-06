#include "CPF.h"
#include<iostream>

using std::cout;
using std::endl;

CPF::CPF(const string &n, const string &c){
    SetNome(n);
    SetCpf(c);
}

CPF &CPF::SetNome(const string &n){
    nome = n;
}
string CPF::GetNome() const{
    return nome;
}

CPF &CPF::SetCpf(const string &c){

    cpf = c;

    cpf_valido = ValidarCpf();

    return *this;
}
string CPF::GetCpf() const{
    
    return cpf;
}

void CPF::Apresentar() const{

    if(cpf_valido == true){
        cout << "Nome: " << nome << endl << "CPF: " << cpf[0] << cpf[1] << cpf[2] << "." << cpf[3] << cpf[4] << cpf[5] << "." << cpf[6] << cpf[7] << cpf[8] << "-" << cpf[9] << cpf[10] << " (valido)" << endl;
    }
    if(cpf_valido == false){
        cout << "Nome: " << nome << endl << "CPF: " << cpf[0] << cpf[1] << cpf[2] << "." << cpf[3] << cpf[4] << cpf[5] << "." << cpf[6] << cpf[7] << cpf[8] << "-" << cpf[9] << cpf[10] << " (invalido)" << endl; 
    }
}

bool CPF::ValidarCpf() const{
    int ncpf = 0;

    for(int i = 0; i < 11; i++){

        if(cpf[i] == cpf[0]){
            ncpf += 1;
        }

        if(ncpf == 11){
            return false;
        }
    }

    ncpf = 0;

    for(int i = 0; i < 9; i++){
        ncpf += (cpf[i] - '0') * (10 - i);
    }

    ncpf = ((ncpf * 10) % 11);
    
    if(ncpf == 10){
        ncpf = 0;}
    
    if(ncpf == (cpf[9] - '0')){

        ncpf = 0;
        
        for(int i = 0; i < 10; i++){
            ncpf += (cpf[i] - '0') * (11 - i);
        }

        ncpf = ((ncpf * 10) % 11);

        if(ncpf == 10){
        ncpf = 0;}

        if(ncpf == (cpf[10] - '0')){
            return true;
        }
    }

    return false;
}