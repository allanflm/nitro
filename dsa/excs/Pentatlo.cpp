#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x;
    cin >> x;

    float n1, n2, n3, n4, n5;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    float m = (n1 + n2 + n3 + n4 + n5) / 5;

    cout << x << " ";
    cout << fixed << setprecision(1) << m << endl;

    return 0;
}