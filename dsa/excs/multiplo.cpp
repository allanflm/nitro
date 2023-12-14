/*
    Múltiplo de 7
     - Chegou a hora de testar seus dotes de programação, escreva um algoritmo que identifique múltiplos de 7.

Exemplo
Entrada	Saída
70

É MULTIPLO DE 7

13

ESSE NÃO É
*/

#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    if (number % 7 == 0)
    {
        cout << "É MULTIPLO DE 7" << endl;
    }
    else
    {
        cout << "ESSE NÃO É" << endl;
    }

    return 0;
}