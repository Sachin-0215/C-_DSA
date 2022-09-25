#include <iostream>
#include <limits.h>
using namespace std;

// Finding max and min in the elements
// int getMax(int arr[],int size){
//     int max = INT_MIN;
//     for (int i = 0; i < size;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     return max;
// }

// int getMin(int arr[],int size){
//     int min = INT_MAX;
//     for (int i = 0; i < size;i++){
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }
//     return min;
// }

pair<int, int> getMax_Min(int arr[], int size)
{
    int maxi = INT16_MIN;
    int mini = INT16_MAX;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }
    pair<int, int> p = make_pair(maxi, mini);
    return p;
}

int main()
{
    int arr[] = {1000, 222, 143, 44, 12};
    // cout << getMax(arr, 5) << endl;
    // cout << getMin(arr, 5) << endl;
    // cout << getMax_Min(arr, 5) << endl;

    return 0;
}