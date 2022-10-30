#include<iostream>
using namespace std;

// max subrray sum
// naivve approach -> O(N^2)
/*
int max_sum(int arr[],int n,int ws){
    int Max = INT16_MIN;
    for (int i = 0; i < n;i++){
        int sum = 0;
        for (int j = i; j < ws + i;j++){
            sum += arr[j];
        }
        Max = max(Max, sum);//10 
    }
    return Max;
}*/

// optimise--->O(N)
int max_subarray_sum(int arr[],int n,int k){
    int sum = 0, start=0,end=0,Max = INT16_MIN;
    while(end<n){
        sum += arr[end];
        if(end-start+1<k){
            end++;
        }
        else if(end-start+1==k){
            Max = max(sum, Max);
            sum -= arr[start];
            start++;
            end++;
        }
    }
    return Max;
}

int main()
{
    int a[] = {2, 3, 5, 2, 9, 7, 1};
    int size = sizeof(a) / sizeof(a[0]);
    int k = 3;//window size
    //cout<<"Max subarray Sum -> "<<max_sum(a, size,k);
    cout<<"Max subarray Sum -> "<<max_subarray_sum(a, size,k);
    return 0;
}