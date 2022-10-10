// friend class
#include <iostream>
using namespace std;

class A
{
    int value;
    void print()
    {
        cout << "I m in A class" << endl;
    }
    // void printValue(B temp){
    //     tem
    // }
    friend class B;
};

class B
{
public:
    void printValue(A temp)
    {
        temp.print();
    }
    friend class A;
};

int main()
{
    A obj;
    B oBj;
    oBj.printValue(obj);

    return 0;
}