#include <iostream>

using namespace std;

int soma(int x, int y)
{

    return x + y;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    cout << soma(n1, n2) << endl;

    return 0;
}