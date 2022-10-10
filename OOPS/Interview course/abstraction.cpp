#include <iostream>
using namespace std;

class Hero
{
public:
    // virtual void dummy() = 0;
    // virtual void dummy(){
        void dummy(){
        cout << "I am in Hero class " << endl;
    }
};

class Player : public Hero
{
public:
    void dummy()
    {
        cout << "I m in Player class" << endl;
    }
};
int main()
{
    // obj creation
    // Hero *obj = new Player();
    // obj->dummy();

    int x = 1,y = 2;
    // case 1:
    // int *const a = &x;
    // x = 12;
    // cout << x << " " <<*a<<endl;

    // case 2:
    // int const *a = &x;
    // x = 12;
    // cout << x << " " <<*a<<" "<<a<<endl;

    // case 3:
    const int *const s = &x;
    // s=&y;
    x = 12;
    cout << x << " " <<*s<<" "<<s<<endl;

    return 0;
}
// Runtime polymorphism -> can be acheive only in dynamic allocation
// 