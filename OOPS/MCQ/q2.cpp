#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A constructor called"<<endl;
    }
};

class B
{

public:
    B()
    {
        cout << "B constructor is called "<<endl;
    }
};
class derived : public A, public B
{
    public:
    derived()
    {
        cout << "derived constructor is called"<<endl;
    }
};
int main()
{
    derived d;
    return 0;
}