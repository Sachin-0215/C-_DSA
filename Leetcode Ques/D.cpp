#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &nums)
{                       // 2 1 4 3 3
    int slow = nums[0]; // 2                0 1 2 3 4
    int fast = nums[0]; // 2
    do
    {
        slow = nums[slow];       // 4  3
        fast = nums[nums[fast]]; // 3  3
    } while (slow != fast);      // T F
    fast = nums[0];              // 2
    while (slow != fast)
    {                      // T
        slow = nums[slow]; // 3 3
        fast = nums[fast]; // 4 3
    }
    return slow;
}
int main()
{
    int a[] = {1, 2, 4, 5, 4, 3};
    // cout << findDuplicate(a);

    return 0;
}