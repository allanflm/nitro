#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // setprecision()
    double f = 3.14159;
    cout << setprecision(5) << f << '\n';

    // setbase()
    int numero = 42;
    cout << "Octa " << setbase(8) << numero << endl;
    cout << "Decimal " << setbase(10) << numero << endl;

    // setw()
    // setfill()
    cout << "Octa " << setbase(8) << numero << endl;
    cout << "Decimal " << setbase(10) << setw(10) << setfill('x') << numero << endl;
    return 0;
}