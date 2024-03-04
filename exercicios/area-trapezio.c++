/*
Área do Trapézio

Para calcular a área de um trapézio qualquer, somamos os comprimentos da base maior com o da base menor, multiplicamos o resultado da soma pela altura do trapézio e dividimos o produto por dois. Então, para calcular a área desse polígono, usaremos a formula seguinte:

Imagem do Trapézio
Para calcular a área de um trapézio qualquer, utilizamos a seguinte fórmula:

A = ((B + b) * h) / 2

Onde:

A: é a medida da área;
B: é a medida da base maior;
b: é a medida da base menor;
h: é a medida da altura.
Entrada
A entrada contêm 3 valores inteiros. Sendo eles, os valores da base maior, base menor e altura, respectivamente, um por linha.

Saída
Apresentar a mensagem "A=" seguido pelo valor da área correspondente, conforme exemplo abaixo, com 1 casa decimal após o ponto.

Exemplo
Entrada	Saída
18
7
2

A=25.0
80
23
3
A=154.5
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float baseMaior, baseMenor, altura;

    cin >> baseMaior >> baseMenor >> altura;
    // A = ((B + b) * h) / 2
    float a = ((baseMaior + baseMenor) * altura) / 2;
    cout << "A="
         << "";
    cout << fixed << setprecision(1) << a << endl;

    return 0;
}