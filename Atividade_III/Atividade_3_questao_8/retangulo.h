#ifndef RETANGULO_H
#define RETANGULO_H

class retangulo{

    public:

        retangulo(const float &, const float &);

        retangulo &SetLargura(const float &);
        float GetLargura() const;

        retangulo &SetAltura(const float &);
        float GetAltura() const;

        float CalculaArea() const;
        float CalculaPerimetro() const;

    private:
        int largura, altura;


};

#endif