#include <iostream>
using namespace std;

void printEven(int n)
{
    int i = 2;
    while (i <= n)
    {
        cout << i << " ";
        i += 2;
    }
    cout<<endl;
}

int getfactorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int fac(int num){
    if(num==0||num==1){
        return 1;
    }
    return num * fac(num - 1);
}
int main()
{
    int num;
    cin >> num;
    printEven(num);
    cout<<getfactorial(num)<<endl;
    cout<<fac(num)<<endl;

    return 0;
}