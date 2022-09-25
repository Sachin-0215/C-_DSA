#include <iostream>
using namespace std;

// sort an array 0's 1's 2's
void sort012(int a[], int n)
{
    // code here
    int one = 0, two = 0, zero = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            zero++;
        else if (a[i] == 1)
            one++;
        else if (a[i] == 2)
            two++;
    }
    int x = 0;
    while (zero--)
    {
        a[x] = 0;
        x++;
    }
    while (one--)
    {
        a[x] = 1;
        x++;
    }
    while (two--)
    {
        a[x] = 2;
        x++;
    }
}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int s = sizeof(arr) / sizeof(arr[0]);
    cout << "Size is " << s << endl;
    sort012(arr, s);
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}