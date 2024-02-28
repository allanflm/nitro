/*
Inverter a sequência

Nathan estava escrevendo uma sequência de vetor para cadastro na disciplina de programação, após finalizar a atividade ele percebeu que havia ordenado de maneira incorreta pois o primeiro da sequencia deveria ser o ultimo, o segundo o penúltimo e assim por diante. Para não precisar refazer o processo de separação escreva um programa que inverta uma sequencia.

Entrada
A primeira linha da entrada contém um inteiro N que indica o número de matrículas (1 ≤ N ≤ 40). A segunda linha contém a sequência de N-matrículas na sequência incorreta.

Saída
Seu programa deve imprimir uma única linha, contendo a sequência correta.

Exemplo
Entrada	Saída
3
32 44 11

11 44 32

4
10 22 31 32

32 31 22 10

*/

#include <iostream>

using namespace std;
/*
    void swap(int vetor[], int i, int j)
    {
        int aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
    }
*/

int main()
{

    int n;
    cin >> n;

    int vetor[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }
    // Invertendo com a funcao SWAP()
    /*
        for (int i = 0; i < n / 2; i++)
        {
            swap(vetor, i, n - i - 1);
        }
        for (int i = 0; i < n; i++)
        {
            cout << vetor[i] << " ";
        }
        cout << endl;
    */

    for (int i = n - 1; i >= 0; i--)
    {
        cout << vetor[i] << " ";
    }

    return 0;
}