#include<iostream>
using namespace std;

void fibonaci(int n){
    int first = -1;
    int second = 1;
    // cout << first << " " << second<<" "; // 0 1 
    // for (int i = 0; i < n - 2;i++){

    for (int i = 0; i < n;i++){
        int sum = first + second; //0  1+1   1+2   2+3  3+5
        cout << sum << " ";// 0 1 1 2 3  5  8
        first = second; //1 1 2  3   5
        second = sum; //1 2 3  5   8
    }
}

int main()
{
    int number;
    cout << "Enter the number "<<endl;
    cin >> number;
    cout << "Fibonaci series : ";
    fibonaci(number);

    return 0;
}