#include <iostream>
using namespace std;

// union of two sorted arrays
void doUnion(int a[], int n, int b[], int m)
{
    // code here
    int i = 0, j = 0,count=0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else if (a[i] > b[j])
        {
            cout << b[j] << " ";
            j++;
        }
        else if (a[i] == b[j])
        {
            cout << a[j] << " ";
            i++;
            j++;
        }
    }
    
    // Print remaining element of largest array
    while (i < n)
    {
        cout << a[i] << " ";
        i++;
    }
    while (j < m)
    {
        cout << b[j] << " ";
        j++;
    }
    
}

int main()
{
    int a[] = {1, 2, 7,10,11};
    int b[] = {1,2,3,11,12,13,17};
    int x = sizeof(a) / sizeof(a[0]);//20/4=5
    int y = sizeof(b) / sizeof(b[0]);//12/4=3
    // cout << x << y;
    cout << "Union of two array is : "<< endl;
    doUnion(a, x, b, y);
    // cout <<endl<< "Total element : "<<doUnion(a,x,b,y) << endl;

    return 0;
}

//         i
// 1 2 3 4 5
// 0 1 2 3 4
//
//       j
// 3 4 5 6 7
// 0 1 2 3 4
// union = 1 2 3 4 5
