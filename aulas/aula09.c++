// Repetição

#include <iostream>

using namespace std;

int main()
{

    float a, b, c;
    // for (int i = 0; i < 30; i++)
    // {
    //     cout << "Digite as 3 notas do aluno: " << i << endl;
    //     cin >> a >> b >> c;
    //     cout << "A media ->  " << (a + b + c) / 3 << endl;
    // }

    bool continua = false;
    // while (continua)
    // {
    //     cout << "Digite as 3 notas do aluno: " << endl;
    //     cin >> a >> b >> c;
    //     cout << "A media ->  " << (a + b + c) / 3 << endl;

    //     cout << "Digite 1 para continuar o 0 para sair: " << endl;
    //     cin >> continua;
    // }

    do
    {
        cout << "Digite as 3 notas do aluno: " << endl;
        cin >> a >> b >> c;
        cout << "A media ->  " << (a + b + c) / 3 << endl;

        cout << "Digite 1 para continuar o 0 para sair: " << endl;
        cin >> continua;
    } while (continua);

    return 0;
}
