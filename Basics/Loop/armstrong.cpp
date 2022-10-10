#include <iostream>
#include <math.h>
using namespace std;

// int is_armstrong(int n)
// {
//     int digit = 0, sum = 0;
//     while (n != 0)
//     {                     // 123
//         digit = n % 10;   // 3  2   1
//         int x = digit;    // 3 2 1
//         sum += pow(x, 3); // 27   8   1
//         n /= 10;          // 12  1  0
//     }
//     return sum;
// }
string armstrongNumber(int n)
{
    // code here
    int digit = 0, sum = 0;
    int originalNo = n,count=0;
    int m = n;
    while(m){
        m /= 10;//1634/10=163    163/10=16   16/10=1  1/10=0
        count++;
    }
    while (n != 0)
    {
        digit = n % 10;
        int x = digit;
        sum += pow(x, count);
        n /= 10;
    }
    return originalNo == sum ? "Yes" : "No";
}

int main()
{
    // int sum = pow(3,2);//
    // cout << sum;
    cout << armstrongNumber(1634);

    return 0;
}