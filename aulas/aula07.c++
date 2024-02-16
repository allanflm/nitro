#include <iostream>

using namespace std;

int main()
{
    int idade;
    cin >> idade;

    /*
        + -> soma
        - -> subtração
        * -> multiplicação
        / -> divisão
        % -> mod | operação modular | resto da divisão
        () -> altera a precedencia
    */

    cout << 2024 - idade << endl;

    //
    idade = idade + 1;
    idade += 1;

    idade = idade - 1;
    idade -= 1;

    // O resultado vai aparecer com forme o numero maior de bytes.
    int a = 2;
    float b = 3.14;
    cout << a * b << endl;

    return 0;
}