#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl
         << endl;
    for (int i = 1; i <= n;i++)
    {
        for (int j = i; j <= n;j++){
            if(i==1||j==n||j==i||i==n)
                cout << j << "  ";
            else
                cout << "   ";
        }
        cout<<endl;
    }

        return 0;
}