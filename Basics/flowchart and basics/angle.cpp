#include<iostream>
using namespace std;

int main()
{
    int angle;
    cin >> angle;
    if(angle>90)
        cout << "Obtuse angle";
    else if(angle<90)
        cout << "Acute angle";
    else if(angle==90)
        cout << "Right angle";

    return 0;
}