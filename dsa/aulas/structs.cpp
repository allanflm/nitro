#include <iostream>
using namespace std;

int main()
{
    struct Pessoa
    {
        string nome;
        int idade;
        int altura;
        float salario;
    } pessoa1, pessoa2, pessoa3;

    pessoa1.nome = "Allan";
    pessoa1.idade = 20;

    //...

    cout << "Nome 1: " << pessoa1.nome << endl;

    Pessoa pessoa4;
    pessoa4.nome = "Felipe";

    Pessoa lista[5];
    cout << "Nome 4: " << pessoa4.nome << endl;

    lista[0].nome = "Thais";

    cout << "Nome: " << lista[0].nome << endl;

    return 0;
}