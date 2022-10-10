#include<iostream>
#include<array>
using namespace std;

int main()
{
    int basic[4] = {1, 2, 3, 4};// static array
    // array<DT,size>
    array<int, 4> a = {1, 2, 3, 4};
    int s = a.size();
    for (int i = 0; i < s;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Element at 2nd Index - > " << a.at(2) << endl; // it return value at that index
    cout << "Empty or not -> "<<a.empty() << endl;// it return int boolean value if empty it return 1 else 0
    cout << "First Element -> " << a.front()<<endl;// it return front value 
    cout << "Last element -> " << a.back() << endl;// it return last element of array

    return 0;
}