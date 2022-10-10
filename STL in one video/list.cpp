#include<iostream>
#include<list>// LL
using namespace std;

int main()
{
    list<int> L;
    L.push_back(1);
    L.push_front(2);

    for(int i:L){
        cout << i << " ";
    }
    cout << endl;

    L.erase(L.begin());
    cout << "After erase "<<endl;
    for(int i:L){
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of list : " << L.size()<<endl;
    
    //copying list from another list

    list<int> l(5,100);
    for(int i:l){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}