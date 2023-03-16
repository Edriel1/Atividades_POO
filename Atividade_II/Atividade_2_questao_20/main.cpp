#include <iostream>
#include "Cupom.h"

using std::cout;
using std::endl;

int main(){

    Cupom c1("1048693", "cupom 1", 5, 10), c2("4879748", "Cupom 2", 10, 15);

    cout << endl << "Imprimindo c1 com as informacoes de inicializacao:" << endl;
    cout << "Cupom de id: " << c1.GetId() << ". \n" << "Descricao: " << c1.GetDescricao() << ". \n"; 
    cout << "A quantidade comprada foi de " << c1.GetQuantidade() << " e o valor individual por produto e de " << c1.GetPreco() << ". \n";
    cout << "Valor total da compra foi de: " << c1.CalculaValor() << ". \n";

    cout << endl << "Imprimindo c2 com as informacoes de inicializacao:" << endl;
    cout << "Cupom de id: " << c2.GetId() << ". \n" << "Descricao: " << c2.GetDescricao() << ". \n"; 
    cout << "A quantidade comprada foi de " << c2.GetQuantidade() << " e o valor individual por produto e de " << c2.GetPreco() << ". \n";
    cout << "Valor total da compra foi de: " << c2.CalculaValor() << ". \n";

    c1.SetId("8723847").SetDescricao("Cupom 1, alterado").SetQuantidade(10). SetPreco(1000);
    c2.SetId("6487289").SetDescricao("Cupom 2, alterado").SetQuantidade(15). SetPreco(300);

    cout << endl << "Imprimindo c1 com as informacoes alteradas:" << endl;
    cout << "Cupom de id: " << c1.GetId() << ". \n" << "Descricao: " << c1.GetDescricao() << ". \n"; 
    cout << "A quantidade comprada foi de " << c1.GetQuantidade() << " e o valor individual por produto e de " << c1.GetPreco() << ". \n";
    cout << "Valor total da compra foi de: " << c1.CalculaValor() << ". \n";

    cout << endl << "Imprimindo c2 com as informacoes alteradas:" << endl;
    cout << "Cupom de id: " << c2.GetId() << ". \n" << "Descricao: " << c2.GetDescricao() << ". \n"; 
    cout << "A quantidade comprada foi de " << c2.GetQuantidade() << " e o valor individual por produto e de " << c2.GetPreco() << ". \n";
    cout << "Valor total da compra foi de: " << c2.CalculaValor() << ". \n";

    return 0;
}