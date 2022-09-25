#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Check Number is Prime or Not Prime" << endl;
    cin >> n;
    // bool isPrime = true;
    // for (int i=2; i < n;i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //     }
    // }
    // if(isPrime)
    //     cout << "Prime";
    // else
    //     cout << "Not a prime" << endl;

    int i = 2;

    for (int i = 0; i < n;i++) 
    {
        if (n % 2 == 0)
        {
            cout << "Not a prime" << endl;
            break;
        }
        if (n == i)
            cout << "Prime" << endl;
    }
    return 0;
}