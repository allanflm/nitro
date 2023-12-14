#include <iostream>
using namespace std;

int main()
{
    long larguraContainer, comprimentoContainer, alturaContainer;
    long larguraNavio, comprimentoNavio, alturaNavio;
    long quantidadeLargura, quantidadeComprimento, quantidadeAltura;
    long result;

    cin >> larguraContainer >> comprimentoContainer >> alturaContainer;
    cin >> larguraNavio >> comprimentoNavio >> alturaNavio;

    quantidadeLargura = larguraNavio / larguraContainer;
    quantidadeComprimento = comprimentoNavio / comprimentoContainer;
    quantidadeAltura = alturaNavio / alturaContainer;

    result = quantidadeLargura * quantidadeComprimento * quantidadeAltura;

    cout << result << endl;
    return 0;
}

/*
Entrada
A entrada consiste de duas linhas. A primeira linha contém três inteiros A, B e C que representam as dimensões dos contêineres, enquanto a segunda linha contém outros três inteiros X, Y e Z que representam as dimensões do navio.


Saída
Seu programa deve imprimir apenas uma linha contendo um inteiro que indica a quantidade máxima de contêineres que o navio consegue transportar.


Restrições
1 ≤ A, B, C, X, Y, Z ≤ 106
É garantido que a maior resposta será menor ou igual a 106

Exemplos
Entrada
1 1 1
1 1 1

Saída
1

Entrada
1 2 5
9 6 11

Saída
54

Entrada
1 2 12
6 9 10

Saída
0

*/