#include "HugenInteger.h"

HugenInteger::HugenInteger(const char arr[40]){
    string Array = arr;
    input(Array);
}

void HugenInteger::input(const string &arr){
    int tirar_0_esquerda = 0;
    this->array = "";
    
    for(int i = 0; i < arr.size(); i++){
        
        if((arr[i] - '0') >= 0 && (arr[i] - '0') < 10){
            continue;
        }else{
            cout << "Valor inserido invalido.";
            exit(1);
            }
    }

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == '0'){

            tirar_0_esquerda += 1;

        }else{break;}
    }

    if(tirar_0_esquerda > 0){

        for(int i = tirar_0_esquerda; i < arr.size(); i++){
            this->array += arr[i];
        }
    }else{
        this->array = arr;
    }

    if(tirar_0_esquerda == arr.size()){
        this->array = "0";
    }
}
void HugenInteger::output(){
    cout << array << std::endl;
}

HugenInteger &HugenInteger::add(const HugenInteger &hugeninteger){
    int tam_ajuste, valor, adicional = 0;
    string Array = "";

    if(this->array.size() > hugeninteger.array.size()){

        tam_ajuste = (this->array.size() - hugeninteger.array.size());

        for(int i = (this->array.size() - 1); i >= 0; i--){
            valor = ((this->array[i] - '0') + (hugeninteger.array[i - tam_ajuste] - '0') + adicional);

            adicional = valor / 10;

            Array += ((valor % 10) + '0');

            if((i - tam_ajuste) == 0){
                break;
            }

            if(i == 0 && adicional != 0){
                Array = "9999999999999999999999999999999999999999";
            }
        }

        if(Array.size() != this->array.size()){
            tam_ajuste = (this->array.size() - Array.size());
            for(int i = (tam_ajuste - 1); i >= 0; i--){
                valor = (this->array[i] - '0') + adicional;

                adicional = valor / 10;
                Array += ((valor % 10) + '0');

                if(i == 0 && adicional != 0){
                    Array = "9999999999999999999999999999999999999999";
                }
            }
        }

    }else{
        
        tam_ajuste = (hugeninteger.array.size() - this->array.size());

        for(int i = (hugeninteger.array.size() - 1); i >= 0; i--){
            valor = ((this->array[i - tam_ajuste] - '0') + (hugeninteger.array[i] - '0') + adicional);

            adicional = valor / 10;
            Array += ((valor % 10) + '0');

            if((i - tam_ajuste) == 0){
                break;
            }

            if(i == 0 && adicional != 0){
                Array = "9999999999999999999999999999999999999999";
            }
        }

        if(Array.size() != hugeninteger.array.size()){
            tam_ajuste = (hugeninteger.array.size() - Array.size());
            for(int i = (tam_ajuste - 1); i >= 0; i--){
                valor = (hugeninteger.array[i] - '0') + adicional;

                adicional = valor / 10;
                Array += ((valor % 10) + '0');

                if(i == 0 && adicional != 0){
                    Array = "9999999999999999999999999999999999999999";
                }
            }
        }
    }

    string n_array = "";

    for(int i = 0; i < Array.size(); i++){
        n_array += Array[(Array.size() - i -1)];
    }

    this->array = n_array;

    return *this;
}

bool HugenInteger::isEqualTo(const HugenInteger &hugeninteger){
    if(this->array.size() != hugeninteger.array.size()){
        return false;
    }

    for(int i = 0; i < this->array.size(); i++){
        if(this->array[i] != hugeninteger.array[i]){
            return false;
        }
    }
    return true;
}
bool HugenInteger::isNotEqualTo(const HugenInteger &hugeninteger){
    return !isEqualTo(hugeninteger);
}

bool HugenInteger::isGreaterThan(const HugenInteger &hugeninteger){
    if(this->array.size() != hugeninteger.array.size()){
        if(this->array.size() > hugeninteger.array.size()){
        return true;
        }else{return false;}
    }
    
    for(int i = 0; i < this->array.size(); i++){
        
        if((this->array[i] - '0') < (hugeninteger.array[i] - '0')){
            return false;
        }
        if((this->array[i] - '0') > (hugeninteger.array[i] - '0')){
            return true;
        }   
    }
    return false;
}
bool HugenInteger::isLessThan(const HugenInteger &hugeninteger){
    if(this->isEqualTo(hugeninteger) == true){
        return false;
    }

    return !this->isGreaterThan(hugeninteger);
}

bool HugenInteger::isGreaterThanOrIqual(const HugenInteger &hugeninteger){

    return !(this->isLessThan(hugeninteger));
}
bool HugenInteger::isLessThanOrIqual(const HugenInteger &hugeninteger){

    return !this->isGreaterThan(hugeninteger);
}