#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("DSA");
    s.push("Technical");
    s.push("Developement");

    cout << "Top Element ->" << s.top() << endl;
    s.pop();
    cout << "Top element ->" << s.top() << endl;

    cout << "Size of stack " << s.size() << endl;

    cout << "Empty or not stack " << s.empty() << endl;
    return 0;
}