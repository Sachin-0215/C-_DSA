#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("C++ DSA");
    q.push("TECHNICAL");
    q.push("DEVELOPEMENT");

    cout << "Size before pop -> " <<q.size()<< endl;
    cout << "First element " << q.front() << endl;

    q.pop();
    cout << "First element " << q.front() << endl;
    cout << "Size After pop -> " <<q.size()<< endl;


    return 0;
}