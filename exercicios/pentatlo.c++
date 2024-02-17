/*
O pentatlo moderno é uma modalidade Olímpica tradicional, composta por 5 das modalidades mais antigas existentes na história do esporte. Os seus competidores precisam se mostrar excelentes na prática de modalidades que exigem habilidades incomuns, podendo assim ser campeões individualmente ou como uma equipe, trazendo medalhas para o seu país. Dentre as habilidades necessárias, o competidor deve se provar um bom atirador, tendo sangue frio e boa mira, um bom esgrimista, tendo uma boa audição, reflexos rápidos e apurados, ser um bom corredor, com as passadas rápidas do deus Hermes, além de nadar bem rápido, como um golfinho, e ser bom de montaria no hipismo.

Considerando que cada atleta recebe uma nota para o desempenho dele em cada modalidade separadamente, vence aquele que tiver uma média aritmética maior, após serem somadas as 5 notas do processo.

O Comitê Olímpico Brasileiro envia em todas as edições dos jogos dois atletas que disputam esta modalidade em busca da glória eterna. Neste momento, eles precisam de sua ajuda para montar um programa que rapidamente possa computar as notas dos atletas durante a classificatória e gerar uma média final a ser usada como padrão de classificação do torneio.

Entrada
Serão dados em uma única linha o número inteiro 'X' de inscrição do candidato (1 <= X <= 1000), seguido de mais 5 notas inteiras N1, N2, N3, N4 e N5 (0 <= N1, N2, N3, N4, N5 <= 10), relativas ao Tiro ao alvo, Natação, Esgrima, Hipismo e Corrida.

Saída
A saída deve imprimir o número de inscrição do atleta seguido de sua média final com uma casa decimal de precisão.

Entrada	            Saída
123 5 10 5 10 10    123 8.0
230 8 8 7 7 9       230 7.8
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{

    int x;
    cin >> x;

    int n1, n2, n3, n4, n5;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    float m = (n1 + n2 + n3 + n4 + n5) / 5;

    cout << x << " ";
    cout << fixed << setprecision(1) << m << endl;

    return 0;
}