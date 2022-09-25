#include <iostream>
using namespace std;

int reverse(int x)
{
    int ans = 0;
    int i = 0;
    int digit = 0;
    while (x != 0)
    {
        digit = x % 10;           // 123%10 = 3  12%10 =2 1%10=1
        ans = (ans * 10) + digit; // 0+3=3    3*10+3=32   320+1=321
        x /= 10;
        i++; // x=12   x=1    0
    }
    if (ans < (INT_MIN / 10) || ans > (INT_MAX / 10))
        return 0;
    else
        return ans;
}

int main()
{

    return 0;
}