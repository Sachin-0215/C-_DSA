#include <iostream>
using namespace std;

int isPalindrome(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < (size / 2); i++)
    {
        if (arr[i] == arr[size - i - 1])
            count++;
    }
    return count;
}
int main()
{
    int s = 8;
    int arr[s] = {1, 2, 3, 1, 1, 3, 2, 1};
    if ((isPalindrome(arr, s)) == (s / 2))
        cout << "TRUE";
    else
        cout << "FALSE";

    return 0;
}