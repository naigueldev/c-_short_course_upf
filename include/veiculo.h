#ifndef VEICULO_H
#define VEICULO_H


class Veiculo
{
private:
    int cor;
    int rodas;

protected:
    int aceleracao;

public:
    void acelerar();
    void frear();
    int getCor();

    int getRodas();
    int getAceleracao();

    void setCor(int cor);
    void setRodas(int rodas);
    void setAceleracao(int aceleracao);

//  a funcao virtual igual a zero torna ela abstrata em outras classes,
//  nao podendo ser instanciada
//    virtual void funcao()=0;
//    virtual void funcao();

    Veiculo();
    virtual ~Veiculo();
};

#endif // VEICULO_H
