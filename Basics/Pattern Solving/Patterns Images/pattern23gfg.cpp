#include <iostream>
using namespace std;

void pattern23(int n)
{
    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        for (int space = 1; space <= (2 * n) - (2 * row); space++)
        {
            cout << " ";
        }
        for (int col = row; col >= 1; col--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        for (int space = 1; space <= (2 * n) - (2 * row); space++)
        {
            cout << " ";
        }
        for (int col = row; col >= 1; col--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    pattern23(5);
    return 0;
}