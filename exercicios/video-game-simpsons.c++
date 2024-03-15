/*
Video game dos Simpsons

Em um episódio de "Os Simpsons", Bart Simpson precisa juntar dinheiro para comprar um jogo de videogame. Ele consegue juntar X reais vendendo limonada na rua, e depois mais Y reais entregando jornais.

O_video_game_dos_simpsons

Escreva um programa que receba como entrada os valores de X e Y, calcule a soma dos dois valores e exiba o resultado na tela, mostrando o quanto Bart conseguiu juntar para comprar o seu jogo de videogame.

Entrada
A entrada é composta por dois números reais, “X” (0.0 <= X <= 1.000) e “Y” (0.0 <= Y <= 1.000), dados em linhas diferentes, representando respectivamente, quanto Bart conseguiu juntar vendendo limonada e entregando jornais.

Saída
A saída será composta por apenas um número real, ou seja, o valor total que Bart conseguiu juntar para comprar o seu jogo de videogame, mostrado com duas casas decimais de precisão.

Entrada	Saída
15.10
20.50

35.60

5.01
6.17

11.18
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n1;
    cin >> n1;
    float n2;
    cin >> n2;

    float total = n1 + n2;

    cout << fixed << setprecision(2) << total << endl;

    return 0;
}