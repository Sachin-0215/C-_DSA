#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < (n - row); col++)    
        {
            cout << "B  " ;
        }
        cout << endl;
    }

    // int count = 0;
    // for(int row = 0; row < n; row++)
    // {
    //     for(int col = 0; col < (n-count); col++)
    //     {
    //         cout << "S ";
    //     }
    //     cout<< endl;
    //     count++;
    // }
    return 0;
}