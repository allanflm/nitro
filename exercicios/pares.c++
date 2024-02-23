/*
 Pares de 1 a 100
 Mostrar detalhes
Faça um programa que mostre os números pares entre 1 e 100, inclusive.

Entrada
Neste problema não há entrada.

Saída
Imprima todos os números pares entre 1 e 100, inclusive se for o caso, um em cada linha.

Exemplo:
  2
  4
  6
  8
  ...
  100
*/

#include <iostream>

using namespace std;

int main()
{
    for (int i = 2; i <= 100; i += 2)
    {
        cout << i << endl;
    }

    return 0;
}