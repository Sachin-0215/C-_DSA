#include <iostream>
using namespace std;

// reverse an array
void reverse(int a[], int s)
{
    int pt1 = 0, pt2 = s - 1;
    while (pt1 < pt2)
    {
        swap(a[pt1], a[pt2]);
        pt1++;
        pt2--;
    }
}
int main()
{
    int a[] = {2, 3, 4, 5, 6, 7, 9};
    int size = sizeof(a) / sizeof(a[0]);
    cout << size<<endl;
    reverse(a, size);
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}