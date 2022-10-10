#include <iostream>
using namespace std;

void printPattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void printpattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int col = i; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}
int main()
{
    printPattern12(5);
    printpattern(5);

    return 0;
}