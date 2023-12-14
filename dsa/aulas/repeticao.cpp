#include <iostream>
using namespace std;

int main()
{

    float a, b, c;
    bool continua = true;

    //-> DO / While
    do
    {
        cout << "Digite as 3 notas do aluno:" << endl;
        cin >> a >> b >> c;

        cout << "A media do aluno foi -> " << (a + b + c) / 3 << endl;

        cout << "Digite 1 para continuar ou 0 para terminal o programa!" << endl;
        cin >> continua;
    } while (continua);

    /*

    -> While
    while (continua)
    {
        cout << "Digite as 3 notas do aluno:" << endl;
        cin >> a >> b >> c;

        cout << "A media do aluno foi -> " << (a + b + c) / 3 << endl;

        cout << "Digite 1 para continuar ou 0 para terminal o programa!" << endl;
        cin >> continua;
    }

    -> FOR
    for (int i = 0; i <= 30; i++)
    {

        cin >> a >> b >> c;
        cout << (a + b + c) / 3 << endl;
    }


    */

    return 0;
}