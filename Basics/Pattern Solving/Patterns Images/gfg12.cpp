// butterfly

#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int row = 1; row <= 2 * n - 1; row++)
    {
        if (row <= n)
        {
            for (int col = 1; col <= row; col++)
            {
                cout << "* ";
            }
            for (int space = 1; space <= 2 * n - 2 * row; space++)
            {
                cout << "  ";
            }
            for (int col = row; col >= 1; col--)
            {
                cout << "* ";
            }
            cout << endl;
        }
        else
        {
            for (int col = 1; col <= (2 * n) - row; col++)
            {
                cout << "* ";
            }
            for (int space = 1; space <= (2 * row) - 2 * n; space++)
            {
                cout << "  ";
            }
            for (int col = (2 * n) - row; col >= 1; col--)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
}

int main()
{
    printPattern(5);
    return 0;
}