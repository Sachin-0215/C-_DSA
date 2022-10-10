#include <iostream>
#include <math.h>
using namespace std;

long long sumOfSeries(long long N)
{
    // code here
    long long sum = 0;
    if (N == 0)
    {
        return 0;
    }
    else
    {
        sumOfSeries(N - 1); // ss(4) ss(3) ss(2) ss(1) ss(0)
    }
    return sum += pow(sumOfSeries(N),3); // sum = 5^3 + 4^3 + 3^3 + 2^3 + 1^3
}

/// @brief 
/// @return 
int main()
{
    cout << sumOfSeries(5);
    return 0;
}