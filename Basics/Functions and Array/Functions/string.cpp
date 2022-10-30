#include <iostream>
using namespace std;

string concatenate(string &a, string &b)
{
    a = "c++";
    b = (" hshs ");
    return a + b;
}



int main()
{
    string a = "cc++ ";
    string b = " cpp";
    cout << concatenate(a, b) << endl;

    cout << (a + b) << endl;
    return 0;
}