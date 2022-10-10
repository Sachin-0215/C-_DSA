// Multilevel
#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    void speak(){
        cout << "Kaha ho Bhau bhau" << endl;
    }
};
class dog:public Animal{
};

class lebra:public dog{
};
int main()
{
    lebra l;
    l.speak();
    return 0;
}