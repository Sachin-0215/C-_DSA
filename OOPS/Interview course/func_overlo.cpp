#include <iostream>
using namespace std;

// same name but diff no..type of arguments or parameter
class Maths
{
public:
    int a;
    int b;
    void add()
    {
        cout << a + b << endl;
    }
    int add(int v)
    {
        return a + b + v;
    }
    int add(float s)
    {
        return a + b + s;
    }
    float add(double s)
    {
        return a + b + s;
    }
};

int main()
{
    Maths m;
    m.a = 1, m.b = 2;
    m.add();
    cout << m.add(5) << endl;
    cout << m.add(1.2f) << endl;
    cout << m.add(2.1) << endl;

    return 0;
}