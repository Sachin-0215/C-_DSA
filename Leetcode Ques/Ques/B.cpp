#include <iostream>
using namespace std;

bool isPowerof2(int m)
{
    if (m <= 0)
        return false;
    bool ans = m & (m - 1);
    if (ans == true)
        return true;
}

bool isPowerOfTwo(int n)
{
    int count = 0;

    // n=1 1>0     1&1 =1  count=1   n=00    2nd iter 0>0 f
    // so 1 is pow of 2
    // n=4  4>0  100&1=0  c=0 n=10    10&1=0  c=0 n=1    1&1=1  c=1 n=0
    // n is 4 yes pow of 2
    while (n > 0)
    {
        if ((n & 1) == 1)
            count++;
        n = n >> 1;
    }
    if (count == 1)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    cout << bool(isPowerof2(n));
    return 0;
}