/*
Degradação de pneus na F1

Em uma corrida de Fórmula 1, é necessário fazer paradas rápidas, chamadas de Pit Stops, para trocar os pneus do carro. O momento de realizar as paradas é muito importante, pois pode influenciar completamente a corrida do piloto, sendo uma questão de estratégia fundamental para obter bons resultados. Por isso, antes de realizar as trocas, a equipe analisa se as condições são oportunas, analisando, por exemplo, a degradação dos pneus. A taxa de degradação dos pneus varia de acordo com o circuito, pois o tipo de asfalto e a temperatura local influenciam na degradação.

Existem 3 tipos de pneus usados nas pistas secas: o pneu macio, que promove maior desempenho, mas tem menor duração, o pneu médio e o pneu duro, que tem menor desempenho, mas maior duração. Além disso, existem os pneus usados na chuva.

Suponha que uma determinada equipe queira contratar um(a) programador(a) para fazer um código para prever em quantas voltas será necessário fazer um Pit Stop em todos os circuitos. A equipe pretende fazer paradas assim que os pneus atingirem uma taxa de degradação de 80% e a corrida apresentar as condições ideais de parada. A equipe escolheu você para analisar determinado circuito, em um dia sem chuva, como caso teste, e caso tenha sucesso, poderá passar para a próxima fase da contratação.

Entrada
A entrada consiste na primeira linha de uma letra maiúscula para representar o tipo de pneu. A letra "S" representa o pneu macio, a letra "M" representa o pneu médio e a letra "H" representa o pneu duro. Na próxima linha, serão dados três números reais "dS", "dM" e "dH", indicando, respectivamente, a taxa de degradacao por volta dos pneus macios, médios e duros em determinada pista de corrida. Saiba que 2.0 <= dH < dM < dS <= 5.0.

Saída
A saída consiste no número inteiro da volta a partir da qual será necessário o Pit Stop.

Entrada	Saída
S
4.8 3.7 2.6

16
M
4.5 3.3 2.3
24

H
4.9 3.8 2.8
28
*/

#include <iostream>

using namespace std;

int main()
{
    char letra;
    cin >> letra;

    float ds, dm, dh;
    cin >> ds >> dm >> dh;

    int degradacao;
    if (letra == 'S')
    {
        degradacao = (100 / ds) * 0.8;
        cout << degradacao << endl;
    }
    else if (letra == 'M')
    {
        degradacao = (100 / dm) * 0.8;
        cout << degradacao << endl;
    }
    else
    {
        degradacao = (100 / dh) * 0.8;
        cout << degradacao << endl;
    }
    return 0;
}