/*
Potência de dois

João quer saber qual é o n-ésimo valor para potência de dois. Ajude ele nesta tarefa.

Tarefa
Escreva um programa que dada a entrada exiba o n-ésimo valor para potência de dois. (utilize laço de repetição)

Entrada
Irá receber um inteiro N onde (2 ≤ N ≤ 30).

Saída
Seu programa deve imprimir uma única linha, contendo o valor dá n-ésima potência.

Exemplo
Entrada	Saída
3

8

10

1024
*/

#include <iostream>
using namespace std;

int main()
{
    int n, resultado = 1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        resultado *= 2;
    }
    cout << resultado << endl;
    return 0;
}