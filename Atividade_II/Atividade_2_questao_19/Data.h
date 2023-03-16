#ifndef DATA_H
#define DATA_H
#include <string>
class Data{
    public:
        Data(const int &, const int &, const int &);

        Data &SetAno(const int &);
        inline int GetAno() const;

        Data &SetMes(const int &);
        int GetMes() const;

        Data &SetDia(const int &);
        int GetDia() const;

        void MostrarData() const;

    private:
        int ano, mes, dia;

};



#endif