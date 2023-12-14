#include <iostream>

using namespace std;

int main()
{

    int idade = 25;
    // selection statement
    switch (idade)
    {
    case 25:
        cout << "Sua idade e de 25 anos" << endl;
        break;
    }

    /*
    bool condicao = false;
    bool outraCondicao = true;

    // && = e;
    // || = ou;
    // ! = negação;

    if (condicao && outraCondicao)
    {
        cout << "Entra!" << endl;
    }

    if (condicao || outraCondicao)
    {
        cout << "Entra!" << endl;
    }

    if (!condicao)
    {
        cout << "entrou usando a negacao!" << endl;
    }



    /--------------/
    bool condicao = false;
    bool outraCondicao = true;
    int idade = 18;
    if (idade >= 18)
    {
        cout << "Maior de idade!" << endl;
    }

    if (condicao)
    {
        cout << "entrou!" << endl;
        if (outraCondicao)
        {
            cout << "nao tem problema" << endl;
        }
    }
    else if (outraCondicao)
    {
        cout << "entrou aqui!" << endl;
    }
    else
    {
        cout << "nao entrou" << endl;
    }

    */

    return 0;
}