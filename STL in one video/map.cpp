#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "DSA CPP";
    m[13] = "DEVELOPEMENT";
    m[2] = "TECHNICAL ";

    // m.insert({5, "Communcation"});

    for (auto i : m)
    {
        cout << i.first << " -> " << i.second << endl;
    }
    cout << endl;

    cout << "Finding 13 -> " << m.count(13) << endl; // true->1
    cout << "Finding 12 -> " << m.count(12) << endl; // false ->0
    cout << endl;

    cout << "Before erase -> " << endl;
    for (auto i : m)
    {
        cout << i.first << " -> " << i.second << endl;
    }
    cout << endl;
    m.erase(13);
    cout << "After erase -> " << endl;
    for (auto i : m)
    {
        cout << i.first << " -> " << i.second << endl;
    }
    cout << endl;

    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++)
    {
        cout << i->first << " ";
    }
    cout << endl;
    return 0;
}