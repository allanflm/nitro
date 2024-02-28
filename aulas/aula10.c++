#include <iostream>

using namespace std;

int main()
{
    int tamanho;
    cout << "Digite o numero de notas que voce quer armazenar: ";
    cin >> tamanho;

    float notas[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        cout << "Nota: ";
        cin >> notas[i];
    }

    cout << "Voce digitou: ";
    for (int i = 0; i < tamanho; i++)
    {
        cout << notas[i] << " ";
    }
    return 0;
}