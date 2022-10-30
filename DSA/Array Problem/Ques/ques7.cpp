#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    set<int> s1, s2;
    vector<int> v;
    for (auto val : nums1)
    {
        s1.insert(val);
    }
    for (auto val : nums2)
    {
        s2.insert(val);
    }

    for (auto val : s1)
    {
        if (s2.find(val) != s2.end())
        {
            v.push_back(val);
        }
    }
    for(auto i:v){
        cout << i << " ";
    }
    cout << endl;
    return v;
}

int main()
{
    vector<int> nums1{4, 9, 5};
    vector<int>nums2{9, 4, 9, 8, 4};
    intersection(nums1, nums2);
    

    return 0;
}