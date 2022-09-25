#include <iostream>
using namespace std;

void rotate_by_one(int arr[], int size) // 1, 2, 4, 56, 64, 70
{
    int x = arr[size - 1]; // x=70
    //          5     3>0
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1]; // arr[5]=arr[4]  arr[4] = arr[3] arr[3]= arr[2]
    }
    arr[0] = x; // 70
    // 70  1  2  4  56  64
}

int main()
{
    int arr[6] = {1, 2, 4, 56, 64, 70};
    int s = sizeof(arr) / sizeof(arr[0]);
    rotate_by_one(arr, s);
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}