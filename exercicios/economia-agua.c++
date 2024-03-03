/*
Economia de Água
 Mostrar detalhes
A empresa local de abastecimento de água, a Saneamento Básico da Cidade (SBC), está promovendo uma campanha de conservação de água, distribuindo cartilhas e promovendo ações demonstrando a importância da água para a vida e para o meio ambiente.

Para incentivar mais ainda a economia de água, a SBC alterou os preços de seu fornecimento de forma que, proporcionalmente, aqueles clientes que consumirem menos água paguem menos pelo metro cúbico. Todo cliente paga mensalmente uma assinatura de R$ 7, que inclui uma franquia de 10 m³ de água. Isto é, para qualquer consumo entre 0 e 10 m³ , o consumidor paga a mesma quantia de R$ 7 reais (note que o valor da assinatura deve ser pago mesmo que o consumidor não tenha consumido água). Acima de 10 m³ cada metro cúbico subsequente tem um valor diferente, dependendo da faixa de consumo. A SBC cobra apenas por quantidades inteiras de metros cúbicos consumidos. A tabela abaixo especifica o preço por metro cúbico para cada faixa de consumo:

Faixa de consumo (m³)	Preço (m³)
até 10
11 a 30
31 a 100
101 em diante
incluído na franquia
R$ 1
R$ 2
R$ 5


Assim, por exemplo, se o consumo foi de 120 m³ , o valor da conta é:

7 reais da assinatura básica;
20 reais pelo consumo no intervalo 11 - 30 m³;
140 reais pelo consumo no intervalo 31 - 100 m³;
100 reais pelo consumo no intervalo 101 - 120 m³.
Logo o valor total da conta de água é R$ 267.


Tarefa
Escreva um programa que, dado o consumo de uma residência em m3 , calcula o valor da conta de água daquela residência.


Entrada
A única linha da entrada contém um único inteiro N, indicando o consumo de água da residência, em m³ (0 ≤ N ≤ 10³).


Saída
Seu programa deve imprimir uma única linha, contendo o valor da conta de água daquela residência.


Exemplo
Entrada
8

Saída
7

Entrada
14

Saída
11

Entrada
42

Saída
51
*/

#include <iostream>

using namespace std;

int main()
{
    int consumo, excesso, valorFinal;
    int valorBase = 7;

    cin >> consumo;

    if (consumo <= 10)
    {
        valorFinal = valorBase;
        cout << valorFinal << endl;
    }
    else if (consumo > 10 && consumo < 31)
    {
        excesso = consumo - 10;
        valorFinal = valorBase + excesso;
        cout << valorFinal << endl;
    }
    else if (consumo > 30 && consumo < 101)
    {
        excesso = consumo - 30;
        valorFinal = valorBase + 20 + (excesso * 2);
        cout << valorFinal << endl;
    }
    else
    {
        excesso = consumo - 100;
        valorFinal = valorBase + 20 + 140 + (excesso * 5);
        cout << valorFinal << endl;
    }

    return 0;
}