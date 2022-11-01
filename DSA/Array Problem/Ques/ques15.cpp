#include <iostream>
using namespace std;

// kadane algo to find largest sum contiguous subarray
int using_kadane(int a[], int size)
{
    int Max_ans = INT16_MIN;
    int MAX_AB_TAK = 0, i = 0;
    while (i < size)
    {
        // include current array element
        MAX_AB_TAK += a[i]; // 4-1-2+1+5-3=4

        // update Max_ans
        if (Max_ans < MAX_AB_TAK)
        {
            Max_ans = MAX_AB_TAK; //-2 4 7
        }
        // if MAX_AB_TAK is -ve then update it to zero
        if (MAX_AB_TAK < 0)
        { //-2<0.........4<0
            MAX_AB_TAK = 0;
        }
        i++;
    }
    // return max sum subarrayy
    return Max_ans;
}

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int s = sizeof(a) / sizeof(a[0]);

    cout << using_kadane(a, s);
    return 0;
}