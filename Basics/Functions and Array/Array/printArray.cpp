#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{ // make sure you should have to pass size also
    for (int i = 0; i < size; i++)
    {
        // accesing all elements
        cout << arr[i] << " ";
    }
    cout << endl;
}

void util(int rr[], int size)
{
    rr[4] = 22;
    rr[3] = 2;
    cout << "Printing in utill function" << endl;
    printArray(rr, 5);
}

int main()
{
    // array creation
    int arr[5] = {1, 2, 3, 4, 5};

    // function call
    // printArray(arr, 5);

    util(arr, 5);
    cout << "Printing in main function" << endl;
    printArray(arr, 5);

    return 0;
}