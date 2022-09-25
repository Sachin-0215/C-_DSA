#include<iostream>
using namespace std;

int main()
{
    int T,i=1;
    cin >> T;
    while(i<=T){
        if(i%3==0)
            cout<<"";
        else
            cout << i << " ";
        i++;
    }
    return 0;
}