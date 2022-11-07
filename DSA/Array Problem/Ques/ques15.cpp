#include <iostream>
using namespace std;


//brute force to find largest subarray sum
int sum(int a[],int size){
    int sum = 0,maximum=INT16_MIN;
    for (int i = 0; i < size;i++){
        sum = a[i];
        for (int j = i + 1; j < size;j++){
            sum += a[j];
            maximum = max(sum, maximum);
        }
    }
    return maximum;
}


//optimised solution
int using_kadane(int a[], int size)
{
    int Max_ans = INT16_MIN;
    int MAX_AB_TAK = 0, i = 0;
    while (i < size)
    {
        // include current array element
        MAX_AB_TAK += a[i]; // 4-1-2+1+5=7  7-3=4

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

    cout << sum(a, s) << endl;
    cout << using_kadane(a, s)<<endl;
    return 0;
}