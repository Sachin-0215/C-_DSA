#include <iostream>
using namespace std;

// find duplicate in an array of N+1 array
int findDuplicates(int a[], int size, int N)
{
    int sum1 = 0;

    for (int i = 0; i < size; i++)
    {
        sum1 += a[i];
    }
    int sum2 = (N * (N + 1)) / 2; // 21
    int ans = sum1 - sum2;        // 26-21=5
    return ans;
}

int main()
{
    int s = 6 + 1, m = 6;
    int a[s] = {1, 2, 2, 3, 4, 5, 6}; // 26
    cout << findDuplicates(a, s, m);

    return 0;
}