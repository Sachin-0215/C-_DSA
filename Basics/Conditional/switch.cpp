#include<iostream>
using namespace std;

int main()
{
    int a, b, f,c;
    cin >> a >> b >> f >> c;
    cout << (a + b - c * f / 3) << endl;
    cout << (a + b - c * f)<< endl;
    switch(a+b-c*f/3){
        case 12:
            cout << (a + b - c * f / 3)<<endl;
        break;
        case 13:
            cout << (a+b-c*f/3)<<endl;
        default:
            cout << (a + b - c * f)<<endl;

    }
    return 0;
}