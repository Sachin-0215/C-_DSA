#include <iostream>
#include <vector>
using namespace std;

// vector is dynamic array.it dynamically increase size based on our requirement. Random access also possible. iske size double hojata hai //when we push more element
int main()
{
    vector<int> v;
    cout << "Size ->" << v.size() << endl;

    v.push_back(1);

    cout << "Capacity ->" << v.capacity() << endl;

    v.push_back(2);

    cout << "Capacity ->" << v.capacity() << endl;

    v.push_back(3);

    cout << "Capacity ->" << v.capacity() << endl;
    cout << "Size ->" << v.size() << endl;

    cout << "Element at 2nd Index: " << v.at(2) << endl;
    cout << "Front " << v.front() << endl;
    cout << "Back " << v.back() << endl;

    cout << "Before Pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    // v.pop_back();
    // v.pop_back();

    cout << "After Pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Before clear size " << v.size() << endl;
    v.clear();
    cout << "After clear size " << v.size() << endl;
    vector<int> a(5,1); // size 5 of all element 1
    cout << "a " << endl;
    for (int j:a){
        cout << j << " ";
    }
    cout << endl;
    // copying vector a to another vector m;
    vector<int> m(a);
    cout << "m " << endl;

    for (int j:m){
        cout << j << " ";
    }
    cout << endl;

    return 0;
}