#include <iostream>
using namespace std;

void printHollow_diamond(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col == n - row + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        for (int col = 1; col < n; col++)
        {
            if (col == row - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j < n; j++)
        {
            if (j == n-i-1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    printHollow_diamond(4);
    return 0;
}