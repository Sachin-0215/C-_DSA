#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(6);
    v.push_back(7);

    cout << "Finding 6 -> " << binary_search(v.begin(), v.end(), 6);
    cout << endl;
    cout << "Finding 5 -> " << binary_search(v.begin(), v.end(), 5);
    cout << endl;

    cout << "Lower bound -> " << lower_bound(v.begin(), v.end(), 7) - v.begin() << endl;
    cout << "Upper bound -> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 30, b = 22;
    cout << "Max -> " << max(a, b) << endl;
    cout << "Min -> " << min(a, b) << endl;
    swap(a, b);
    cout << a << " " << b << endl;

    string s = "abcd";
    reverse(s.begin(), s.end());// vvoid func
    cout << "String reverse -> "<< s<< endl;

    rotate(v.begin(),v.begin()+1, v.end());
    cout << "After rotate " << endl;
    for(int j:v){
        cout << j << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    cout << "After sorting " << endl;
    for(int j:v){
        cout << j << " ";
    }
    
    cout << endl;
    return 0;
}