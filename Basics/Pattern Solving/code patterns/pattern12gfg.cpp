#include <iostream>
using namespace std;

void pattern12(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        for (int space = 1; space <= (2 * n) - 2 * row; space++)
        {
            cout << "  ";
        }
        for (int col = row; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}
int main()
{
    pattern12(5);
    return 0;
}
