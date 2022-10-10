#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= 2 * n; row++)
    {
        cout << endl;
        int tcir = row > n ? (2 * n) - row : row;
        int tnos = n - tcir;
        for (int s = 1; s <= tnos; s++)
        {
            cout << " ";
        }
        for (int col = 1; col <= tcir; col++)
        {
            cout << "^ ";
        }
        if (tcir == n)
        {
            cout << endl;
            for (int col = 1; col <= tcir; col++)
            {
                cout << "^ ";
            }
        }
    }
    return 0;
}
/*
tcir = total_col_in_row
tnos = total_no_of_spaces

*/