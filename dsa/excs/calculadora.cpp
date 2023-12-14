#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char oper;
    cin >> oper;

    double x, y, soma;
    cin >> x >> y;

    switch (oper)
    {
    case '+':
        soma = x + y;
        cout << soma << endl;
        break;
    case '-':
        soma = x - y;
        cout << soma << endl;
        break;
    case '*':
        soma = x * y;
        cout << soma << endl;
        break;
    case '/':
        soma = x / y;
        cout << fixed << setprecision(1) << soma << endl;
        break;
    }
    return 0;
}