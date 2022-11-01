#include <iostream>
using namespace std;

bool check_palindrome(int arr[], int s)
{
    //taking 2 ptr
    int ptr1 = 0, ptr2 = s - 1;
    //comparing ptr1 & ptr2
    while (ptr1 < ptr2)
    {
        // comparing if both not equal then return false and then go out of loop
        if (arr[ptr1++] != arr[ptr2--])
        {
            return false;
            break;
        }
        //inc / dec both ptr
        //ptr1++;
        //ptr2--;
    }
    //whole array traverse so it is palindrome
    return true;
}

int main()
{
    int arr[] = {1, 2, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (check_palindrome(arr, size))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}