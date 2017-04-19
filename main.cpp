#include <iostream>
#include "veiculo.h"
#include "carro.h"

using namespace std;

int main()
{

    Veiculo *p = new Veiculo();

    p->setAceleracao(1000);
    p->setRodas(4);
    p->setCor(10);

    Carro *c = new Carro();
//    delete p;
    return 0;
}
