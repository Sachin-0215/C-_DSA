#include <iostream>
using namespace std;

void rotate(int arr[], int n)
{
    int x = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
}

int main()
{
    int A[] = {9, 8, 7, 6, 4, 2, 1, 3};
    int N = sizeof(A) / sizeof(A[0]);
    // cout << N;

    rotate(A, N);
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}