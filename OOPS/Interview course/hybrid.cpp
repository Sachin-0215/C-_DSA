#include<iostream>
using namespace std;

// combination other two inheritance
class A{
    public:
    int a=2;
    int c = 4;

};
class B{
    public:
        int g = 1;
        int d = 2;
};
class D:public A,public B{
};

int main()
{
    
    return 0;
}