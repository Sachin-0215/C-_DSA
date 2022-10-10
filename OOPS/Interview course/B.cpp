// Access modifiers - public private(by default if not mark) protected(you will learn in inheritance)
// java - public private protected default

#include <iostream>
using namespace std;

// private wihtin class accessible hai only not outside of the class
// public is accessed inside and outside

class Hero
{

    // Data memeber
public:
    int subs;
    int views;

    // member function
    int getSubs()
    {
        return subs;
    }
    // private:
    void print()
    {
        cout << subs << endl;
    }
};

int main()
{
    Hero h1;

    // h1.print();// public so accessed and value is garbage
    // h1.print();// private so not accessed and value is garbage

    // using . operator we can access data members and members function
    cout << h1.subs << endl; // garbage
    h1.print();//garbage

    

    return 0;
}