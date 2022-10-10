#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int row = 1; row < 2 * n; row++)
    {
        if (row <= n)
        {
            for (int j = 1; j <= row; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 1; j <= (2 * n - row); j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

int main()
{

    printPattern(5);
    return 0;
}