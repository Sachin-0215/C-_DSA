#include<iostream>
using namespace std;

void printEven(int n){
    int i = 2;
    while(i<=n){
        cout << i << " ";
        i+=2;
    }
}

int main()
{
    int num;
    cin >> num;
    printEven(num);
    return 0;
}