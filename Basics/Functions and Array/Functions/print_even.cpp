#include<iostream>
using namespace std;

void even(int n){
    int i = 2;
    while(i<=n){
        if(i%2==0){
            cout<<"even -> "<<i<<endl;
        }
        i+=2;
    }

}

int main()
{
    int m;
    cin >> m;
    even(m);
    return 0;
}