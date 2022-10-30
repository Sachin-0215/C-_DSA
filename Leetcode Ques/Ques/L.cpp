#include <iostream>
#include <unordered_set>
using namespace std;

bool subArrayExists(int arr[], int n)
{
    // naive approch
    //  for(int i=0;i<n;i++){
    //      int curr_sum=0;
    //      for(int j=i;j<n;j++){
    //          curr_sum+=arr[j];
    //          if(curr_sum==0)return true;
    //      }
    //  }
    //  return false;

    unordered_set<int> s; // hash
    int pref_sum = 0;
    for (int i = 0; i < n; i++)
    {
        pref_sum += arr[i];
        if (pref_sum == 0)
        {
            return true;
        }
        if (s.find(pref_sum) != s.end())
        {
            return true;
        }
        s.insert(pref_sum);
    }
    return false;
}

int main()
{
    int ar[] = {4, 2, -3, 1, 6};
    int size = sizeof(ar) / sizeof(ar[0]);
    if (subArrayExists(ar, size))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}