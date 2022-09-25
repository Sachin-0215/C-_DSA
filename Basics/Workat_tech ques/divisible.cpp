#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n, i = 1;
        cin >> n;
        while (i <= n)
        {
            if (i % 3 == 0)
            {
                continue;
            }
            else
            {
                cout << i << " ";
            }

            i++;
        }
        cout << endl;
    }
    return 0;
}