#include <iostream>
using namespace std;

int fact(int n){
    int fact = 1;
    if(n==1||n==0){
        return fact;
    }
    int i = 1;
    while(i<=n)
    {
        fact *= i;
        i++;
    }
    return fact;
}

int main()
{
    int num;
    cin >> num;
    cout << "Factorial of " << num << " is : " << fact(num)<<"\n";

    // cout << "Factorial " << num << " of n is: " << factorial(num)<<"\n";
    // cout << "Factorial " << num << " of n is: " << getFactorial(num);
    // big nu ka factorial find krne pe int range se bahar ho rha hai isliye 12 tak sahi factorial print ho rha int overflow
    return 0;
}
// int factorial(int n)
// {
//     if (n == 1 || n == 0)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }
// int getFactorial(int n)
// {
//     int ans = 1;
//     for (int i = n; i >= 1; i--)
//         ans *= i;

//     return ans;
// }