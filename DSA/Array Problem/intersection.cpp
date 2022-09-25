#include <iostream>
using namespace std;

// intersection of two sorted array
void doIntersection(int a[], int b[], int x, int y)
{
    int i = 0, j = 0;
    while (i < x && j < y)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else if (a[i] == b[j])
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {4, 5, 6, 7};
    int x = sizeof(a) / sizeof(a[0]);
    int y = sizeof(b) / sizeof(b[0]);
    doIntersection(a, b, x, y);
    return 0;
}