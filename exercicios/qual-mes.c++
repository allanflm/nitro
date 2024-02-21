/*
Qual o mês?
 Mostrar detalhes
Leia um valor inteiro entre 1 e 12 e imprima o mês correspondente em português.

Entrada
A entrada contém um único valor inteiro.

Saída
Imprima por extenso o nome do mês correspondente ao número existente na entrada, com a primeira letra em maiúscula.

Exemplo
  Entrada
  4

  Saída
  Abril

  Entrada
  12

  Saída
  Dezembro
*/

#include <iostream>

using namespace std;

int main()
{
    int mes;
    cin >> mes;
    switch (mes)
    {
    case 1:
        cout << "Janeiro";
        break;
    case 2:
        cout << "Fevereiro";
        break;
    case 3:
        cout << "Março";
        break;
    case 4:
        cout << "Abril";
        break;
    case 5:
        cout << "Maio";
        break;
    case 6:
        cout << "Junho";
        break;
    case 7:
        cout << "Julho";
        break;
    case 8:
        cout << "Agosto";
        break;
    case 9:
        cout << "Setembro";
        break;
    case 10:
        cout << "Outubro";
        break;
    case 11:
        cout << "Novembro";
        break;
    case 12:
        cout << "Dezembro";
        break;

    default:
        break;
    }
    return 0;
}