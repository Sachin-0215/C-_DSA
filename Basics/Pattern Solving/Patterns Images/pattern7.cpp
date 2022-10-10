#include<iostream>
using namespace std;

void printPattern7(int n){
    for (int i = 1; i <= n;i++){
        for (int space = 1; space <= n - i;space++){
            cout << " ";
        }
        for (int col = i; col >= 1;col--)
        {
            cout << "*";
        }
        for (int col = 2; col <= i;col++){
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int m=5;
    printPattern7(m);
    return 0;
}