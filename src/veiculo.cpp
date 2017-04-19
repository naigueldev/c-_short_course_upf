#include "veiculo.h"
#include <iostream>

Veiculo::Veiculo()
{
    //ctor
}

Veiculo::~Veiculo()
{
    //dtor
}


void Veiculo::acelerar()
{
    std::cout << "aceleracao";
}
void Veiculo::frear()
{
    std::cout << "frear";
}
int Veiculo::getCor()
{
    return cor;
}

int Veiculo::getRodas()
{
    return rodas;
}
int Veiculo::getAceleracao()
{
    return aceleracao;
}

void Veiculo::setCor(int cor)
{
    this->cor = cor;
}
void Veiculo::setRodas(int rodas)
{
    this->rodas = rodas;
}
void Veiculo::setAceleracao(int aceleracao)
{
    this->aceleracao = aceleracao;
}
