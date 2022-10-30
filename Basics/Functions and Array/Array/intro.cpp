#include <iostream>
using namespace std;

int main()
{
    // Syntax of array

    // creation
    //  int arr[10];

    // int a1[5] = {1, 2, 3, 4, 5};
    // int a2[] = {1, 2, 3, 4, 5};
    int a[4] = {1, 2}; // 1 2 0 0 compiler dependent
    cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << endl;
    int b[3] = {1};
    cout << b << " " << b[1] << " " << b[2]
         << " " <<b[0]<< endl;

    int aa[2] = {0};
    cout << aa[0] << " " << aa[1] << endl;

    int i = sizeof(aa) / sizeof(aa[0]);
    cout << i << endl;

    int rrr[5] = {12, 3, 3};
    for (int i = 0; i < 5; i++)
    {
        cout << rrr[i] << " ";
    }
    cout << endl;
    int size = sizeof(rrr) / sizeof(rrr[0]);
    cout << size << endl;
    return 0;
}