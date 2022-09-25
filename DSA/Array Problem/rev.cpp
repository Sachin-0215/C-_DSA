#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int i = 0, j = size - 1;
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < size;i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
}

int main()
{
    int s=6;
    int arr[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    cout << "Array : " << endl;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "After reversing :"<<endl;
    reverseArray(arr, s);
    return 0;
}