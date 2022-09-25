#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // cout << (10 & 6)<< endl;// 1010
    // 0110
    //    --------
    //   0010
    // int n;
    // cin >> n;
    // while(n!=0)
    // {
    //     int bit = n & 1;
    //     cout << "Bit : "<<bit << endl;
    //     n = n >> 1;     //10100
    // }

    // another method
    int n;  // 6
    cin >> n;
    int ans = 0, i = 0;
    while (n != 0)    //  T   T     T 
    {
        int bit = n & 1;      //0     1    1
        ans = (bit * pow(10, i)) + ans;      // 0x10^0+0  0     1x10^1+0 10     (1*100)+10
        // n is right shift,last bits get destroyed
        n = n >> 1;    //11(3)    1
        i++;    // 1   2    
    }
    cout << "Binary Number of given n is " << ans << endl;

    return 0;
}