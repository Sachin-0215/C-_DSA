#include <iostream>
using namespace std;

int main()
{
    char opr;
    int a, b;
    cout << "Enter two values : " << opr << endl;
    cin >> a >> b;
    cout << "Which operation you want to perform: " << opr << endl;
    cin >> opr;
    if (opr == '+')
        cout << (a + b) << endl;
    else if (opr == '-')
        cout << (a - b) << endl;
    else if (opr == '/')
        cout << (a / b) << endl;
    else if (opr == '*')
        cout << (a * b) << endl;
    else if (opr == '%')
        cout << (a % b) << endl;

    return 0;
}