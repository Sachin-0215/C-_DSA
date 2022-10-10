#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int a[n] = {1, 1,1,1};
    // o/p - 0,1 

    // i j  
    // 0 1 2 3 4
    int flag = 0;
    for (int i = 0,j = i+1; i < n-1,j<n; i++,j++)
    {
        for (int j = i+1; j < n; j++)
        {
            {
                if (a[i] == a[j])
                {
                    cout << i << " , " << j << endl;
                    flag++;
                }
            }
        }
    }
    cout << "Total pair is " << flag << endl;
    return 0;
}