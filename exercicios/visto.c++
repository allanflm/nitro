/*
Visto

Jonathan foi contratado para fazer um estágio na Macrosoft, nos Estados Unidos, porém, para conseguir o visto que ele precisa para a viagem é preciso que ele seja sorteado pelo sistema da imigração do país.

Pesquisando no seu buscador favorito, o Ding, Jonathan descobriu que ele consegue saber se será sorteado através do número do seu processo, já que os sorteados são sempre aqueles que possuem um número de processo divisível por 42. Por isso, como ele está ocupado preparando seus documentos para a viagem, ele pediu para que você fizesse um programa que indicasse se ele havia sido sorteado ou não.

Entrada
A entrada é composta por um inteiro P correspondente ao número do processo.

Saída
O programa deverá imprimir "Sim" se Jonathan for sorteado e "Não" caso contrário.
Restrições
1 ≤ P ≤ 100000

Entrada	Saída
42

Sim
3
Nao
*/

#include <iostream>

using namespace std;

int main()
{
    int p;
    cin >> p;

    if (p % 42 == 0)
    {
        cout << "Sim" << endl;
    }
    else
    {
        cout << "Nao" << endl;
    }

    return 0;
}