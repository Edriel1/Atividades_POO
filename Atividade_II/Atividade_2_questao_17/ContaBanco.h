#ifndef CONTABANCO_H
#define CONTABANCO_H

class ContaBanco{
    public:

        ContaBanco(double);

        double GetSaldo();

        void Creditar(double);

        void Debitar(double);

    private:

        double saldo;

        void SetSaldo(double);

        void VerificarDebito(double);
};
#endif