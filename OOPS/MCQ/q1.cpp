#include<iostream>
using namespace std;

class Test{
    static int i;
    int j;
    int s;
    static char ik;
    char h, gs, w, sd;
    // char b;
    // char a;

    int fun(){
        return 5;
    }
};

/* static data members do not contribute in size of an object. So ‘i’,'ik' is not considered in size of Test. Also, all functions (static and non-static both) do not contribute in size.*/

int main()
{
    // Test t;
    cout << sizeof(Test);
    return 0;
}