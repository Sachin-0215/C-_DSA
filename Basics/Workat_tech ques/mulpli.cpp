#include <iostream>
using namespace std;

int main()
{
    int t, n, i = 1;
    cin >> t;
    while (t--)
    {
        while (i <= 10)
        {
            cout << n * i << " ";
            i++;
        }
    }
    return 0;
}