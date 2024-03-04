/*
A melhor calculadora

Jorge e Tiago resolveram por em prática suas habilidades em programação para ajudar a tia Ana em sua cantina. Durante um dia de expediente tia Ana precisa fazer várias operações matemáticas, Jorge e Tiago desejam acelerar este processo criando uma calculadora simples. Infelizmente eles ainda não conseguiram, você pode dar uma forcinha?

Tarefa
Escreva um programa que, dada a operação e os valores, retorne o resultado.

Entrada
A entrada consiste de um carácter C que pode ser '+', '-', '/' ou '*', representando adição, subtração, divisão e multiplicação respectivamente, e os números A e B para serem calculados.

Caso a operação seja '/' utilize precisão de 1 dígito, e você pode assumir que B sempre será diferente de 0.

Saída
Seu programa deve imprimir uma única linha, contendo o resultado da operação.

Exemplo
Entrada	Saída
+ 10 2

12

/ 5 3

1.7

- 7 10

-3

* 2 7

14
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char oper;
    cin >> oper;

    double x, y, soma;
    cin >> x >> y;

    switch (oper)
    {
    case '+':
        soma = x + y;
        cout << soma << endl;
        break;
    case '-':
        soma = x - y;
        cout << soma << endl;
        break;
    case '*':
        soma = x * y;
        cout << soma << endl;
        break;
    case '/':
        soma = x / y;
        cout << fixed << setprecision(1) << soma << endl;
        break;
    }
    return 0;

    return 0;
}