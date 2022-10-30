#include<iostream>
using namespace std;

void func(float a,float b){
    float sum = a + b;
    cout << sum << " "<<endl;
}
int func(int a,int b,int c=10){
    return a + b + c;
}

double func(int a = 10){
    // a++;
    // cout << a<<endl;
    return a;
}

void print(int n){
    cout << "Printing number " << n << endl;
}

int main()
{
    func(1.8f, 2.3f);//3
    cout<<func(13, 32,5)<<endl;//50
    cout<<func(13.0)<<endl;//13
    print(10);

    return 0;
}