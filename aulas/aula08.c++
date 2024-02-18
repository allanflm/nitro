#include <iostream>

using namespace std;

int main()
{
    bool condicao = true;
    bool outraCondicao = false;

    if (condicao)
    {
        cout << "entrou!" << endl;
        if (3 > 2)
        {
            cout << "e maior!" << endl;
        }
    }
    else
    {
        cout << "nao entrou!" << endl;
    }

    // &&(e) - ||(ou) - !(negaçao)
    if (condicao || outraCondicao)
    {
        cout << "entra" << endl;
    }

    // -> https://en.cppreference.com/w/cpp/language/switch
    int idade = 25;
    switch (idade)
    {
    case 25:
        cout << "25 anos" << endl;
        break;

    default:
        break;
    }

    return 0;
}