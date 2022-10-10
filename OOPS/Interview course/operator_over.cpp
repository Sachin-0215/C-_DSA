#include <iostream>
using namespace std;

class Hero
{
public:
    int age;
    int weight;
    int height;

    Hero operator - (Hero &b)
    {
        Hero res;
        res.age = this->age - b.age;
        res.weight = this->weight - b.weight;
        res.height = this->height - b.height;
        return res;
    }
};

int main()
{
    Hero a;
    a.age = 1;
    a.weight = 2;
    a.height = 23;

    Hero b;
    b.age = 2;
    b.weight = 3;
    b.height = 23;

    Hero res = a - b;
    cout << res.age << " " << res.weight << " " << res.height<<endl;

    return 0;
}