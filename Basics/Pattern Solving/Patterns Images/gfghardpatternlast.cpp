#include <iostream>
using namespace std;

void gfghardpattern(int n)
{
    int originalN = n;
    int m = 2 * n - 1;
    for (int row = 1; row <= m; row++)
    {
        for (int col = 1; col <= m; col++)
        {
            int atEveryindex=originalN-min(min(row,col),min(n-row,n-col));
            cout<<atEveryindex<<" ";
        }
        cout << endl;
    }
}

int main()
{
    gfghardpattern(4);
    cout << min(min(12, 15), min(14, 9));

    return 0;
}