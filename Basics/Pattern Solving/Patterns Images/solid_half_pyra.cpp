#include <iostream>
using namespace std;

void printSolid_half_pyra(int n)
{
    // code here
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = n - 1; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    printSolid_half_pyra(5);

    return 0;
}