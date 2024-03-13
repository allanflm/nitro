/*
Continha

O semestre já começou e as aulas já estão aí. Você que não é bobo(a), nem nada, decidiu treinar programação com os melhores professores da UFBA. E para mostrar seus conhecimentos, foi requisitado que você faça um programa para resolver a expressão matemática, dada por ((A + B) * (C - D) * (E + F)) / 2.0 e mostre para todos que você é fera nas continhas.

Entrada
A entrada contém 6 valores inteiros: A, B, C, D, E, F (0 <= A, B, C, D, E, F <= 100).

Saída
Imprima a mensagem “Eu sou FERA nas continhas e o resultado é ”, sem as aspas, em seguida o resultado da expressão, que é um número real com uma casa decimal de precisão.

Entrada	Saída
7
3
15
30
0
2

Eu sou FERA nas continhas e o resultado é -150.0
1
2
10
5
2
2
Eu sou FERA nas continhas e o resultado é 30.0

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // ((A + B) * (C - D) * (E + F)) / 2.0

    int a, b, c, d, e, f;

    cin >> a >> b >> c >> d >> e >> f;

    float conta = ((a + b) * (c - d) * (e + f)) / 2.0;

    cout << "Eu sou FERA nas continhas e o resultado é " << fixed << setprecision(1) << conta << endl;

    return 0;
}