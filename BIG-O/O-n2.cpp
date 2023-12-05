#include <iostream>

using namespace std;

void printItems(int n)
{
    // n * n = 2n
    // O(n²);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i << j << endl;
        }
    }
}

int main()
{

    printItems(10);

    return 0;
}