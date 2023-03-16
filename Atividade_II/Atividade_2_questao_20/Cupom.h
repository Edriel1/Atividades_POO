#ifndef CUPOM_H
#define CUPOM_H
#include <string>

using std::string;

class Cupom{

    public:
        Cupom(const string &, const string &, const int &, const float &);

        Cupom &SetId(const string &);
        string GetId() const;

        Cupom &SetDescricao(const string &);
        string GetDescricao() const;

        Cupom &SetQuantidade(const int &);
        int GetQuantidade() const;

        Cupom &SetPreco(const float &);
        float GetPreco() const;

        float CalculaValor() const;

    private:
        string id, descricao;
        int quantidade;
        float preco;


};

#endif