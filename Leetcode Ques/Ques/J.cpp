#include <iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int res = nums.size();

    int i = 0;
    for (int num : nums)
    {
        res ^= num;
        res ^= i;
        i++;
    }
    return res;
}

int main()
{
    int nums[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    // missingNumber(nums);
    int num = 3, i = 3;
    int res = num ^ i;
    cout << res << endl;

    return 0;
}