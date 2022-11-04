#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
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
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return v;
}

vector<int> intersection_of_array(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    vector<int> ans;

    int ptr1 = 0, ptr2 = 0;
    int m = nums1.size(), n = nums2.size();

    while (ptr1 < m && ptr2 < n)
    {
        if (nums1[ptr1] == nums2[ptr2])
        {
            ans.push_back(nums1[ptr1]);
            ptr1++;
            ptr2++;
        }
        else if (nums1[ptr1] < nums2[ptr2])
        {
            ptr1++;
        }
        else if (nums1[ptr1] > nums2[ptr2])
        {
            ptr2++;
        }
    }
    return ans;
}

// union of two array
vector<int> union_of_array(vector<int> &v1, vector<int> &v2)
{
    // vector<int> s;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    // int ptr1 = 0, ptr2 = 0;
    // int size1 = v1.size(), size2 = v2.size();

    // while (ptr1 < size1 && ptr2 < size2)
    // {
    //     if (v1[ptr1] > v2[ptr2])
    //     {
    //         s.push_back(v2[ptr2]);
    //         ptr2++;
    //     }
    //     else if (v1[ptr1] < v2[ptr2])
    //     {
    //         s.push_back(v1[ptr1]);
    //         ptr1++;
    //     }
    //     else if (v1[ptr1++] == v2[ptr2++])
    //     {
    //         s.push_back(v1[ptr1]);
    //     }
    // }
    // printing the union aray
    // for (int i = 0; i < s.size();i++){
    //     cout << s[i] << " ";
    // }
    // cout << endl;
    // return s;
    unordered_set<int> s;
    for (int i = 0; i < v1.size(); i++)
    {
        s.insert(v1[i]);
    }
    for (int i = 0; i < v2.size(); i++)
    {
        if(!s.count(v2[i])){
            s.insert(v2[i]);
        }
    }
    vector<int> ans;
    for(auto i:s){
        ans.push_back(i);
    }
    for (int i = 0; i < ans.size();i++){
        cout << ans[i]<<" ";
    }
        return ans;
}

// 3 4 5 8 9
// 2 4 5 7 8 9  
// 2 3 4 5 7 8 9
int main()
{
    vector<int> nums1{4, 3, 9, 5, 8};
    vector<int> nums2{5, 7, 9, 4, 8, 2};
    // intersection(nums1, nums2);
    union_of_array(nums1, nums2);

    return 0;
}