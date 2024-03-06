/*
Reajuste

A empresa Congenial resolveu conceder um aumento de salários a todos seus funcionários de acordo com a tabela abaixo:

Salário	Percentual de Reajuste
0 - 400.00	15%
400.01 - 800.00	12%
800.01 - 1200.00	10%
1200.01 - 2000.00	7%
Acima de 2000.00	4%

Tarefa
Faça um programa que leia o salário de um funcionário, calcule e mostre o novo salário, o valor de reajuste ganho e o índice reajustado, em percentual.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste e o percentual de reajuste ganho, conforme exemplo abaixo.

Exemplo
Entrada	Saída
400.00
Novo salario: 460.00
Reajuste ganho: 60.00
Em percentual: 15 %

800.01
Novo salario: 880.01
Reajuste ganho: 80.00
Em percentual: 10 %

2000.00
Novo salario: 2140.00
Reajuste ganho: 140.00
Em percentual: 7 %
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float novoSalario, reajuste;
    int percentual;
    float salario;
    cin >> salario;

    if (salario <= 400.00)
    {
        reajuste = (salario * 15) / 100;
        novoSalario = salario + reajuste;
        percentual = 15;
    }
    else if (salario >= 400.01 && salario <= 800.00)
    {
        reajuste = (salario * 12) / 100;
        novoSalario = salario + reajuste;
        percentual = 12;
    }
    else if (salario >= 800.01 && salario <= 1200.00)
    {
        reajuste = (salario * 10) / 100;
        novoSalario = salario + reajuste;
        percentual = 10;
    }
    else if (salario >= 1200.01 && salario <= 2000.00)
    {
        reajuste = (salario * 7) / 100;
        novoSalario = salario + reajuste;
        percentual = 7;
    }
    else
    {
        reajuste = (salario * 4) / 100;
        percentual = 10;
        novoSalario = salario + reajuste;
        percentual = 4;
    }

    cout << "Novo salario: " << fixed << setprecision(2) << novoSalario << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
    cout << "Em percentual: " << percentual << " %" << endl;

    return 0;
}