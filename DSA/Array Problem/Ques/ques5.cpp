#include<iostream>
#include<algorithm>
using namespace std;

void Sort012(int arr[],int n){
    int low = 0, high = n - 1,mid=0;
    while(mid<=high){
        switch (arr[mid])
        {
        case 0:
            swap(arr[low++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high--]);
            break;
        }
    }

    //using sort
    // sort(arr, arr + n);//begin,end
}

int main()
{
    int nums[]= {2,1,2,0,2,0,1,1,0};
    int s = sizeof(nums) / sizeof(nums[0]);
    Sort012(nums, s);
    for (int i = 0; i < s; i++)
    {
        cout<<nums[i] << " ";
    }
    cout << endl;

    return 0;
}