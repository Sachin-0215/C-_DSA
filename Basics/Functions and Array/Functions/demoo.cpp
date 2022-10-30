#include<iostream>
using namespace std;

//function is top down approach
void su(int m){
    cout << "su integer " << m << endl;
}
void ra(int a){
    cout << "ra integer " << a << endl;
    a++;
    su(a);
}
void rs(int n){
    cout << "rs integer " << n << endl;
    n++;
    ra(n);
}


int main()
{
    int n = 21;
    rs(n);
    cout << "In main function " << n << endl;
    return 0;
}