#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    // your code goes here
    int T, n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        int a = n;
        int sum = 0;
        while (n != 0)
        {
            int digit = n % 10;
            sum += pow(digit, 3);
            n /= 10;
        }
        if(sum==a)
            cout << "Yes"<<endl;
        else
            cout << "No" << endl;
    }
    return 0;
}