#include <iostream>
using namespace std;

void moveAll_negative(int arr[], int size)
{
    int i = 0, j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    int s = 7;
    int arr[] = {1, -2, -2, -12, -3, 4, -1};
    moveAll_negative(arr, s);
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
//    j  i
//-2  1 -2 -12 -3 4 -1
// 0  1  2   3  4 5  6