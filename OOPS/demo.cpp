#include <iostream>
using namespace std;

// class Hero{

// }; // empty class size is 1byte memory

// class CH{
//     int a;
//     bool b;
// };

class Code
{ // by default it is private
    // private members can be accesed within its class only
    public:
        int subs;
        bool a;
    // private:
    void print()
    {
        cout << subs << endl;
    }
};

int main()
{
    // cout << "Size of empty class in C++ is " << sizeof(Hero);//1
    // cout << "Size of CH is " << sizeof(CH);//5 .No. size is 8 due to padding and greedy alignment
    // size of empty class in java?

    // object creation
    Code first;
    cout << "Size of Code is " << sizeof(Code) << endl;
    cout << "Size of Code ka object is " << sizeof(first) << endl;
    cout << "Printing the subs for first object " << first.subs << endl;
    
    // first.print();
    // using . operator we can accesed data members and members function
    return 0;
}