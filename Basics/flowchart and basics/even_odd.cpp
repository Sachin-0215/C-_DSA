#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    
    if(a&1==1)
        cout<<"odd";
    else
        cout << "Even";  
        // This is fast than mod
    return 0;
}