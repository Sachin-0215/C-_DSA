#include <iostream>
using namespace std;

void union_sorted(int arr1[], int arr2[], int size1, int size2)
{
    int arr[size1];
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] == arr2[j])
        {
            arr[k] = arr1[i];
            i++;
            j++;
            k++;
        }
    }
    while (i < size1)
    {
        arr[k] = arr[i];
        k++;
    }
    while (j < size2)
    {
        arr[k] = arr[j];
        k++;
    }
    for (int i = 0; i < size1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 3};
    int S1 = sizeof(a) / sizeof(a[0]);
    int S2 = sizeof(b) / sizeof(b[0]);
    union_sorted(a, b, S1, S2);

    return 0;
}