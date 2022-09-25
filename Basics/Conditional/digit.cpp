#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n>=1)
    {
        int digit = n % 10;
        cout << "Reverse Digit : " << digit << endl;
        //    padding n
        n = n / 10;
    }
    
    return 0;
}