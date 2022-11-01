#include <iostream>
using namespace std;

void swap_alternate(int a[], int size)
{
    for (int i = 0; i+1 < size; i += 2)
    {
        if (i < size)
        {
            swap(a[i], a[i + 1]);
        }
    }
}
int main()
{
    int arr[] = {2, 7, 5, 50, 6, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    swap_alternate(arr, size);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}