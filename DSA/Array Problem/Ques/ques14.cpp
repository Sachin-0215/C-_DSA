#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    vector<int> ans;
    int size = arr.size();
    int i = 0;
    while(i<size){
        int count = 1;
        for (int j = i + 1; i < size;i++){
            if(arr[i]==arr[j]){
                count++;
            }
            else{
                break;
            }
        }
        ans.push_back(count);
    }
    return true;
}

//Array Problem\Ques\"ques14
// terminate called after throwing an instance of 'std::bad_alloc'
//   what():  std::bad_alloc

int main()
{
    vector<int> a{-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    if(uniqueOccurrences(a)){
        cout << "true";
    }else{
        cout << "false";
    }

    return 0;
}