#include <iostream>
using namespace std;

int main()
{
    // Rules of variable naming conventions :
    // int 1abv; 
    // float main;
    // int return;
    // int abc2;
    // float 4.jd;
    // int $half;
    // float @js;
    // int !lal;
    // float l01 = 1.4f;
    // cout << l01;
    //     error: expected unqualified-id before numeric constant
    //      int 1abv;
    //          ^~~~
    // var.cpp:9:9: error: expected unqualified-id before 'return'
    //      int return;
    //          ^~~~~~
    // var.cpp:11:11: error: expected unqualified-id before numeric constant
    //      float 4.jd;
    //            ^~~~
    // var.cpp:14:9: error: expected unqualified-id before '!' token
    //      int !lal;
    double s141_s27;  // valid
    // int 3E14;
    // int 3.14;
    // int 3'14;
    // int 3,14;// all invalid

    cout << (-1e-1)<<endl;
    int i = 8;
    cout << i << hex <<"\t"<<i+i<<endl;
    cout << (0x1A)<<endl;
    cout<<(010)<<endl;
    

    return 0;
}