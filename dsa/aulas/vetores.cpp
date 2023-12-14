#include <iostream>
using namespace std;

int main()
{
    int tamanho;
    cin >> tamanho;

    int notas[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        cin >> notas[i];
    }

    for (int i = 0; i < tamanho; i++)
    {
        cout << notas[tamanho] << endl;
    }
    return 0;
}