// priority queue-> related to heap

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // max heap
    priority_queue<int> maxi;

    // minheap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(4);
    maxi.push(3);
    maxi.push(2);

    cout << "SIZE -> " << maxi.size() << endl;

    int n = maxi.size();
    cout << "Max heap : " ;
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl<<endl;

    mini.push(5);
    mini.push(4);
    mini.push(3);
    mini.push(2);
    mini.push(1);

    int m = mini.size();
    cout << "SIZE -> " << mini.size() << endl;

    cout << "Min heap : " ;
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl<<endl;

    cout << "Empty or not -> " << mini.empty() << endl;
    cout << "Empty or not -> " << maxi.empty() << endl;


    return 0;
}