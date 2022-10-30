#include<iostream>
using namespace std;

void printsq(int n){
    int i = 1;
    while(i<=n){
        cout << i * i<<" ";
        i++;
    }
}

int main()
{
    printsq(6);
    return 0;
}