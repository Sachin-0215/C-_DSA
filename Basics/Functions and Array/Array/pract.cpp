#include<iostream>
using namespace std;

void printArray(int arr[],int size){// make sure you should have to pass size also 
    for (int i = 0; i < size;i++){
        // accesing all elements
        cout << arr[i] << " ";
    }
    cout << endl;
}

void xyz(int arr[],int size){
    arr[0] = 23; // base addrss ki value change hui
    arr[1] = 45;
    arr[2] = 1;
    cout << "Printing in xyz function"<<endl;
    printArray(arr, 3);
}

int main()
{
    int arr[3] = {1, 2, 3};
    xyz(arr, 3);// iss func mein array ki base address ki copy gyi
    cout << "Printing in main function" << endl;
    printArray(arr, 3);
    return 0;
}