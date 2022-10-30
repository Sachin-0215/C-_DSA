#include <iostream>
using namespace std;

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int ncr(int aa, int b)
{
    int val = fact(aa) / (fact(aa - b) * fact(b));
    return val;
}

void printPattern(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << ncr(row, col)<<" ";
        }
        cout << endl;
    }
}
int main()
{
    printPattern(7);
    return 0;
}