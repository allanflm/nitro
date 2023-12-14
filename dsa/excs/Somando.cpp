#include <iostream>
using namespace std;

int main()
{

    int tamanho, soma;
    cin >> tamanho;

    int numeros[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        cin >> numeros[i];
    }

    for (int i = 0; i < tamanho; i++)
    {
        soma += numeros[i];
    }
    cout << soma << endl;
    return 0;
}