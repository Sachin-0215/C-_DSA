#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findDuplicate(vector<int> &nums)
{ 
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return nums[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> nums{2, 1, 3, 4, 2};
    cout<<findDuplicate(nums);
    return 0;
}