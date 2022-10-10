// hierachical

#include <iostream>
using namespace std;

class Animal
{
public:
    int leg = 4;
    int tail = 1;
    void walking()
    {
        cout << "Walking with " << leg << " leg ..." << endl;
    }
    void speak()
    {
        cout << "Speaking ..." << endl;
    }
};
class Dog : public Animal
{
};
class cat : public Animal
{
};
class Cow : public Animal
{
};
class Buffalo : public Animal
{
};

int main()
{
    Dog d;
    d.speak();
    cat c;
    c.speak();
    Buffalo b;
    b.walking();
    Cow co;
    co.walking();

    return 0;
}