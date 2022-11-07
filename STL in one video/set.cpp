// set - it store only unique element. return sorted order

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(8);
    s.insert(8);
    s.insert(4);
    s.insert(28);
    s.insert(83);
    s.insert(18);
    s.insert(8);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    s.erase(s.begin());
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    s.erase(s.end());
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // set<int>::iterator it = s.begin();
    // it++;
    // s.erase(it);
    // for (auto j : s)
    // {
    //     cout << j << " ";
    // }
    // cout << endl;

    // cout <<"Is -8 present or not -> "<< s.count(-8) << endl;

    // set<int>::iterator itr = s.find(8);

    // cout << "Value present at itr -> " << *itr << endl;
    // for (auto it = itr; it != s.end();it++){
    //     cout << *it << " ";
    // }
    // cout << endl;


    return 0;
}