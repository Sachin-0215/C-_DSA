// Multiple
#include <iostream>
using namespace std;

class Lion
{
public:
    int age;
    void speak()
    {
        cout << "Lion speak" << endl;
    }
};
class Tiger
{
public:
    int weight;
    void speak()
    {
        cout << "Tiger speak" << endl;
    }
};

class Liger : public Lion, public Tiger
{
};

int main()
{
    Liger p;
    cout << p.age << " " << p.weight << endl;

    // p.speak(); // inheritance ambiguity solu -> scope resolution
    p.Lion::speak();
    p.Tiger::speak();

    return 0;
}