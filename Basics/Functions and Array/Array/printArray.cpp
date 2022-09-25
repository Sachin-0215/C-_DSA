#include<iostream>
using namespace std;

void printArray(int arr[],int size){// make sure you should have to pass size also 
    for (int i = 0; i < size;i++){
        // accesing all elements
        cout << arr[i] << " ";
    }
}
int main()
{
    // array creation
    int arr[5] = {1, 2, 3, 4, 5};

    // function call
    printArray(arr, 5);
    return 0;
}