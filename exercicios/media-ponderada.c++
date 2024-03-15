/*

Media Ponderada
 Mostrar detalhes
Em uma disciplina da UFBA, as notas dos alunos são compostas por 3 avaliações: duas provas online com peso 4 e um trabalho final com peso 2. Sabendo disso, escreva um programa que leia as notas dos alunos e calcule a média ponderada das notas.

Entrada
A entrada contém uma linha com três números decimais, representando as notas das duas provas e do trabalho final, respectivamente.

Saída
Imprima a média ponderada das notas do aluno com duas casas decimais após a vírgula.

Entrada	Saída
8.0 7.5 9.0

8.00
6.5 6.0 6.5
6.30

5.0 10.0 8.0
7.60
*/

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    float n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    float sum = (n1 + n2 + n3) / 3.0;
    // float valoar = roundf(sum);

    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}