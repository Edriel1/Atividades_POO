#ifndef CPF_H
#define CPF_H

#include <string>

using std::string;

class CPF{
    public:

        CPF(const string &, const string &);

        CPF &SetNome(const string &);
        string GetNome() const;

        CPF &SetCpf(const string &);
        string GetCpf() const;

        void Apresentar() const;

    private:

        string nome;
        string cpf;
        bool cpf_valido;

        bool ValidarCpf() const;
};
#endif