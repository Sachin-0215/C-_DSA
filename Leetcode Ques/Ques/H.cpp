#include <iostream>
#include<math.h>
using namespace std;

// int countDigits(int n){
//     int x = n,flag = 0;
//     while(n!=0){
//         n /= 10;
//         flag++;
//     }
//     return flag;
// }

// int countDigits(int n)
// {
//     string x = to_string(n);
//     return x.length();
// }

int countDigits(int n)
{
    int digits = floor(log10(n) + 1);
    return digits;
}

int main()
{
    int N;
    cin >> N;
    cout << "Number of digits in " << N << ": " << countDigits(N);
    return 0;
}