#include <iostream>
using namespace std;

// int F(int n)
// {
//     int i = 1, sum = 0;
//     while (i <= n)
//     {
//         if (n % i == 0)
//         {
//             sum += i;
//         }
//         i++;
//     }
//     return sum;
// }
// int sumofDivisors(int a){
//     int ans = 0;
//     while(a){//4 3 2 1 F
//         F(a);//
//         ans += F(a);
//         a--;
//     }
//     return ans;
// }

long long sumofDivisors(int n)
{
    long long ans = 0, i = 1;
    while (i <= n) // 1 2
    {
        ans += (n / i) * i;//(4/1)*1 =4     (4/2)*2=4   (4/3)*3=3  (4/4)*4=4        ans+=4+4+4+3=15  
        i++;
    }
    return ans;
}
int main()
{
    int m = 15;
    cout << sumofDivisors(m) << endl;
    // cout << F(1) << " "<<F(2)<<" "<<F(3)<<" "<<F(4)<<endl;
    return 0;
}