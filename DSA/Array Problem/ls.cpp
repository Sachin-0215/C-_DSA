#include<iostream>
using namespace std;


int Lsearch(int arr[],int size,int target){
    for (int i = 0; i < size;i++){
        if(arr[i]==target){
            return 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 8, 17, 6, 7};
    // cout<<Lsearch(arr, 5, 17);
    if(Lsearch(arr, 5, 7)==1){
        cout << "Successfull Search" << endl;
    }
    else{
        cout << "Unsuccessfull Search" << endl;
    }
    return 0;
}