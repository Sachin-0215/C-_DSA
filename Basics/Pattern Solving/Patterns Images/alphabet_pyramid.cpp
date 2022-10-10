#include <iostream>
using namespace std;

/*
    E
    D E
    C D E
    B C D E
    A B C D E
*/

int main()
{
    int n = 5;
    // char ch = 'A' + (n - 1);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << (char)('A'+n-j-1)<< " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i <= n; i++)
    {
        int ch = 65 + n - 1;   // 65+5-1=69 
        for (int j = 0; j < i; j++)
        {
            cout << (char)ch << " ";  // E
            ch--;
        }
        cout << endl;
    }

    return 0;
}