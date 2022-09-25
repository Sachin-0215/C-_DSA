#include <iostream>
using namespace std;

int factorial(int n)
{
    //int ans = 1; // limitation big no. ka factorial nai sahi se nikal payega ex 13,14.......
                 // for (int i = 1; i <= n;i++){
    long long int ans = 1;
    for (int i = n; i >= 1; i--)
    {
        ans *= i;
    }
    return ans;
}
int nCr(int row, int col)
{
    long long int result = (factorial(row) / (factorial(row - col) * factorial(col)));
    return result;
}

void pascalTriangle(int N)
{
    int value;
    for (int row = 0; row <= N; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            value = nCr(row, col);
            cout << value << " ";
        }
        cout << endl;
    }
}
int main()
{
    pascalTriangle(6);
    return 0;
}