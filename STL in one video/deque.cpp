#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(12);
    dq.push_back(16);
    dq.push_back(15);

    dq.push_front(2);
    dq.push_front(3);
    dq.push_front(4);


    for(int i:dq){
        cout << i << " ";
    }
    cout << endl;

    dq.pop_front();
    dq.pop_back();

    for(int i:dq){
        cout << i << " ";
    }
    cout << endl;

    //element indexing start from 0
    cout << "Print third Element -> " << dq.at(3) << endl;
    cout << "Front -> " << dq.front() << endl;
    cout << "Back -> " << dq.back() << endl;
    cout << "Empty or not -> " << dq.empty() << endl;

    cout << "Before erase : " <<dq.size()<< endl;
    dq.erase(dq.begin(), dq.begin() + 1);
    cout << "After Erase : " << dq.size() << endl;

    for(int v:dq){
        cout << v << " ";
    }
    cout << endl;
    
    return 0;
}