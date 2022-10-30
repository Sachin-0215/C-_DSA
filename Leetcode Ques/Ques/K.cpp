#include <iostream>
#include <algorithm>
using namespace std;

void sort_color(int arr[], int n)
{
    int low = 0, high = n - 1, mid = 0;
    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[mid++], arr[low++]);
            break;
        case 1:
            arr[mid++];
            break;
        case 2:
            swap(arr[mid], arr[high--]);
            break;
        }
    }
}

int main()
{
    int ar[] = {2, 0, 1, 2, 1, 2, 1, 0, 2, 0};
    int size = sizeof(ar) / sizeof(ar[0]);
    sort_color(ar, size);
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;

    return 0;
}