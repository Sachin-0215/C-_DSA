#include <iostream>
using namespace std;

void pushZerosToEnd(int arr[], int n)
{
    // code here
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[k] = arr[i];
            k++;
        }
    }
    while (k < n)
    {
        arr[k] = 0;
        k++;
    }
}

int main()
{
    int A[] = {3, 0, 2, 1, 5, 0, 0, 4, 0, 5, 1};
    int size = sizeof(A) / sizeof(A[0]);
    pushZerosToEnd(A, size);
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}