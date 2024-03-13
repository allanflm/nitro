/*
Barras de ouro

lacasadepapel

O Professor e sua equipe conseguiram concluir o plano e retirar todo o ouro do Banco da Espanha. Mas com todo o movimento, as barras de ouro estão organizadas em lotes de diferentes quantidades e ninguém sabe quantas eles possuem ao todo.

Precisando contar todas essas barras, o Professor convida você a se tornar o "Salvador" e desenvolver um programa que receba a quantidade de barras que está em cada lote e retorne a quantidade total.

Entrada
A entrada possui uma sequência de números inteiros N1, N2, N3 ... N (1 ≤ N ≤ 500), finalizada por 0 (indicando que os lotes terminaram). Cada número diferente de zero representa, portanto, o número de barras de ouro naquele lote que não será maior do que 500 barras.

Saída
A saída consiste em imprimir a quantidade total de barras de ouro.

Exemplo
Entrada	Saída
50
103
28
77
311
0
569

395
90
15
202
0
702
*/

#include <iostream>

using namespace std;

int main()
{
    int barras, totalDeBarras = 0;
    cin >> barras;

    while (barras != 0)
    {
        totalDeBarras += barras;
        cin >> barras;
    }
    cout << totalDeBarras << endl;
}