#include <iostream>
using namespace std;

void printInvertedTriangle(int n)
{
    // code here
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k != (2 * i - 1); k++)
        {
            cout << "*";
        }
        // for (int j = 0; j < n - i; j++)
        // {
        //     cout << " ";
        // }
        cout << endl;
    }
}
int main()
{
    printInvertedTriangle(5);
    return 0;
}