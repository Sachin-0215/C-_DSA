#include<iostream>
using namespace std;

int main()
{
    /*
        * * * *
          * * *   
            * *
              *         
    */
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        //spaces
        for(int col = 1; col <= row-1; col++)
        {
            cout << "";
        }
        for(int col = 1; col <=(n-row+1); col++)
        {
            cout << "G ";
        }

        
        cout << endl;
    }
        return 0;
}