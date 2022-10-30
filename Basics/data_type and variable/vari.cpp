#include<iostream>
using namespace std;

int main()
{
    // constructor initialisor
    int x(10);

    //uniform initialiser
    int y{1};

    //normal initialisation
    int z = 1;

    auto result = x + y + z;
    cout << x<<endl;
    cout << y << endl;
    cout << z << endl;
    cout << result << endl;

    // decltype(result) a;
    // cout << sizeof(a)<<endl;// not used mostly because it is not readable

    return 0;
}