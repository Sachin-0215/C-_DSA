#include<iostream>
using namespace std;

int main()
{
    int n,fact=1,count=1;
    cin >> n;
    while(count<=n)
    {
        fact *= count;
        count++;
    }
    cout << fact;
    return 0;
}