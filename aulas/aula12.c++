
// Structs é uma maneira de agrupar varias variaveis relacionadas em um só lugar.
// Cada variavel da estrutura é conhecida como membro da estrutura.
// As vezes nos referimos a estrutura como objeto, e as variaveis como propriedades ou atributos do objeto.
#include <iostream>
using namespace std;

int main()
{
    struct Pessoa
    {
        string nome;
        int idade;
        float peso;
    } pessoa1, pessoa2;

    pessoa1.nome = "Allan";
    cout << "Nome: " << pessoa1.nome << endl;
    pessoa2.nome = "Felipe";
    cout << "Nome: " << pessoa2.nome << endl;

    Pessoa pessoa3;
    pessoa3.nome = "Thais";
    cout << "Nome: " << pessoa3.nome << endl;

    Pessoa lista[5];
    lista[0].nome = "Alexandre";
    cout << "Primeira pessoa: " << lista[0].nome << endl;

    return 0;
}