#include <iostream>

using namespace std;

int main()
{

    int num1 = 11;
    int num2 = num1;

    num1 = 22;

    cout << "Num1 = " << num1 << endl;
    cout << "Num2 = " << num2 << endl;

    return 0;
}