#ifndef VEICULO_H
#define VEICULO_H


class veiculo
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

        veiculo();
        virtual ~veiculo();
};

#endif // VEICULO_H
