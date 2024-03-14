/*
Ajudando o Bart

ajudebart

O Bart está em apuros e precisa de uma ajuda sua. Após ser visto andando de skate pelo colégio, levou uma advertência de sua professora. A professora mandou ele enviar um e-mail para ela escrevendo a mesma frase várias vezes, enumerando cada frase para facilitar saber quantas foram escritas. Como sempre, ele está com zero vontade de fazer o que ela exigiu e está procurando uma forma de escapar disso. Com isso, ele lembrou de um colega inteligente que está cursando ACCS e pode fazer um programa que escreva esse texto para ele: você!

Sua tarefa é: Escrever um código que dada uma entrada contendo um valor N e uma frase qualquer, imprima essa frase na tela N vezes.

Entrada
A entrada é composta por duas linhas:

Um inteiro: indica a quantidade de vezes que a frase deverá ser repetida;
Uma frase.
Saída
A saída deverá conter a frase da entrada repetida N vezes, com uma enumeração decrescente no início de cada frase: "NúmeroFraseAtual. FraseRepetida". Sendo que NúmeroFraseAtual é o número da contagem da frase, e deverá ser seguido de ponto, seguido de espaço, seguido da frase a ser repetida.

Exemplo
Entrada	Saída
2
Nao vou andar de skate na escola.

2. Nao vou andar de skate na escola.
1. Nao vou andar de skate na escola.
5
Nao posso levar skate para escola.
5. Nao posso levar skate para escola.
4. Nao posso levar skate para escola.
3. Nao posso levar skate para escola.
2. Nao posso levar skate para escola.
1. Nao posso levar skate para escola.

*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string frase;
    cin.ignore();
    getline(cin, frase);

    for (int i = n; i > 0; i--)
    {

        cout << i << ". " << frase << endl;
    }

    return 0;
}