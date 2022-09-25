#include <iostream>
using namespace std;

// swap alternate in an array 
void swap_Alternate(int arr[], int size)
{
    int temp;
    // for (int i = 0; i < size; i += 2) // 12 90 5 10 69 37 45 48
    // {
    //     if (i + 1 < size)
    //     {
    //         swap(arr[i], arr[i + 1]);
    //     }
    // } // 90 12 10 5 37 69 48 45
    for (int i = 0; i + 1 < size; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    int s = 5;
    int arr[] = {12, 90, 10, 69, 37};
    cout << endl
         << "After swapping alternates" << endl;
    swap_Alternate(arr, s);
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}