#include "HugenInteger.h"

using std::endl;

int main(){
    HugenInteger hugeninteger1("1234567891234567891234567891234567891234");
    HugenInteger hugeninteger2("1234567891234567891234567891234567891234");

    cout << "Testando os valores de inicializacao do hugeninteger1:" << endl;
    hugeninteger1.output();
    cout << "Testando os valores de inicializacao do hugeninteger2:" << endl;
    hugeninteger2.output();
    cout << endl;

    cout << "Testando o metodo isEqualTo, para ver se hugeninteger1 e igual a hugeninteger2:" << endl;
    if(hugeninteger1.isEqualTo(hugeninteger2) == true){
        cout << "Sao iguais." << endl;
    }else{
        cout << "Sao diferentes." << endl;
    }
    cout << endl;

        cout << "Testando o metodo isNotEqualTo, para ver se hugeninteger1 e diferente de hugeninteger2:" << endl;
    if(hugeninteger1.isNotEqualTo(hugeninteger2) == true){
        cout << "Sao diferentes." << endl;
    }else{
        cout << "Nao sao diferentes." << endl;
    }
    cout << endl;

    hugeninteger1.input("2345678912345678912345678912345678912345");

    cout << "Testando o valor do hugeninteger1 alterado pelo metodo input:" << endl;
    hugeninteger1.output();
    cout << endl;

    cout << "Testando o metodo isGreaterThan para ver se hugeninteger1 e maior que hugeninteger2:" << endl;
    if(hugeninteger1.isGreaterThan(hugeninteger2) == true){
        cout << "E maior." << endl;
    }else{
        cout << "Nao e maior." << endl;
    }
    cout << endl;

    cout << "Testando o metodo isLessThan para ver se hugeninteger1 e menor que hugeninteger2:" << endl;
    if(hugeninteger1.isLessThan(hugeninteger2) == true){
        cout << "E menor." << endl;
    }else{
        cout << "Nao e menor." << endl;
    }
    cout << endl;

    hugeninteger1.add(hugeninteger2);

    cout << "Testando o valor de hugeninteger1 sendo aumentado por hugeninteger2 usando o metodo add:" << endl;
    hugeninteger1.output();
    cout << endl;

    cout << "Testando o metodo isGreaterThanOrIqual para ver se hugeninteger1 e maior ou igual a hugeninteger2:" << endl;
    if(hugeninteger1.isGreaterThanOrIqual(hugeninteger2) == true){
        cout << "E maior ou igual." << endl;
    }else{
        cout << "Nao e maior ou igual." << endl;
    }
    cout << endl;

    cout << "Igualando hugeninteger1 com o hugeninteger2:" << endl;

    hugeninteger1 = hugeninteger2;

    hugeninteger1.output();
    cout << endl;

    cout << "Testando o metodo isLessThanOrIqual para ver se hugeninteger1 e menor ou igual a hugeninteger2:" << endl;
    if(hugeninteger1.isLessThanOrIqual(hugeninteger2) == true){
        cout << "E menor ou igual." << endl;
    }else{
        cout << "Nao e menor ou igual." << endl;
    }
    cout << endl;

    hugeninteger1.input("000012345678912345678");

    cout << "Testando atribuicao de valor para hugeninteger1 com menos de 40 digitos:" << endl;
    hugeninteger1.output();
    cout << endl;

    cout << "Testando comparacao entre valores com quantidade de digitos diferentes:" << endl;
    if(hugeninteger1.isGreaterThan(hugeninteger2) == true){
        cout << "hugeninteger1 e maior que hugeninteger2." << endl;
    }else{
        cout << "hugeninteger1 nao e maior do que hugeninteger2." <<endl;
    }
    cout << endl;

    hugeninteger1.add(hugeninteger2);

    cout << "Testando o metodo add com valores que tem quantidades diferentes:" << endl;
    cout << "hugeninteger1 tendo menos digito do que hugeninteger2:" << endl;
    hugeninteger1.output();
    hugeninteger1.input("9999999999999999999999999999999999999998");
    hugeninteger2.input("12345678912345678912345678");
    cout << "Hugeninteger1 tendo mais digitos doque hugeninteger2 e a soma  tenta passar do limite de 40 digitos:" << endl;
    hugeninteger1.add(hugeninteger2);
    hugeninteger1.output();

    cout << "Testando tentativa de colocar um valor incorreto no hugeninteger1:" << endl;
    hugeninteger1.input("1234567891234ethv");

    return 0;
}