#include<iostream>
using namespace std;

void move(int arr[],int n){
    int temp[n];
    int k = 0;
    for (int i = 0; i < n;i++){
        if(arr[i]>=0){
            temp[k++]=arr[i];
        }
    }
    for (int i = 0; i < n;i++){
        if(arr[i]<0){
            temp[k++]=arr[i];
        }
    }
    for (int i = 0; i < n;i++){
        arr[i] = temp[i];
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {-5, 7, -3, -4, 9, 10, -1, 11};
    int s = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < s;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    move(arr, s);
    return 0;
}