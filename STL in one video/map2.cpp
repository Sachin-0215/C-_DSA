#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    //empty map container
    map<int, int> mp;
    mp.insert(pair<int, int>(1, 10));
    mp.insert(pair<int, int>(2, 10));
    mp.insert(pair<int, int>(4, 7));

    //another way of inserting a value in a map
    mp[7] = 10;
    ++mp[4];
    mp[8]=10;


    //printing the map mp
    map<int, int>::iterator tr;
    cout << "\nThe map mp is: \n";
    cout << "\tKEY\tELEMENT\n";
    for (tr = mp.begin(); tr != mp.end();tr++){
        cout << "\t" << tr->first << "  -> \t" <<tr->second<<endl;
    }
    cout << endl;

    return 0;
}