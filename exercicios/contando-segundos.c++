/*
Contador de segundos
 Mostrar detalhes
Contador_de_segundos
Senku é um garoto muito inteligente e gosta de contar o tempo em segundos. As vezes, quando precisa contar um tempo muito longo, ele pode se perder e errar a conta. Senku quer saber se contou o tempo de um determinado evento em segundos corretamente, para isso ele precisa que você converta o tempo em segundos, que ele calculou, para horas, minutos e segundos.

Entrada
Será dado um número inteiro N (1 <= N <= 100000000) que representa o tempo do evento em segundos.

Saída
Contém o tempo dado em segundos convertido para horas, minutos e segundos, como nos exemplos abaixo.

Entrada	Saída
4000

1h 6m 40s
5200
1h 26m 40s

59
0h 0m 59s
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int segundos, minutos, hora;
    cin >> segundos;

    hora = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = segundos % 60;

    cout << hora << "h"
         << " " << minutos << "m"
         << " ";
    cout << fixed << setprecision(0) << segundos << "s";

    return 0;
}