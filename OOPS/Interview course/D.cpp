// static and dynamic allocation
#include <iostream>
using namespace std;

class Hero
{
    int level;
    int health;

public:
    int getLevel() { return level; }

    void setLevel(int value)
    {
        level = value;
        cout << "Level : " << level << endl;
    }

    void print() { cout << "Hii hello" << endl; }
};

int main()
{
    // static allocation
    Hero h;
    cout << "Static allocation: " << endl;

    // ch->print();
    // ch->setLevel(2);
    // cout<<ch->getLevel();//garbage because it is static allocation

    h.print();
    cout << "Value : " << h.getLevel() << endl;

    h.setLevel(2);
    cout << "Value : " << h.getLevel() << endl;

    cout << endl
         << endl;
    // dynamic allocation
    Hero *ch     =       new Hero();
    //stack               //heap
    // see pic 1288

    // ch->level;//private not accesible

    cout << "Dynamic allocation: " << endl;

    // ch->print();
    // ch->setLevel(2);
    // cout<<ch->getLevel();//0 not garbage because it is dynamic allocation

    (*ch).print();
    cout << "Value : " << (*ch).getLevel() << endl;

    (*ch).setLevel(2);
    cout << "Value : " << (*ch).getLevel() << endl;

    return 0;
}