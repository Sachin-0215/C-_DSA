#include <iostream>
using namespace std;

// Mode of inheriteance - protected

// parent class or superclass or base class
class Human
{
public:
    int height;
    int weight;
    int age;

    void setHeight(int height)
    {
        this->height = height;
    }
    int getHeight() { return this->height; }

    void setWeight(int weight)
    {
        this->weight = weight;
    }
    int getWeight() { return this->weight; }

    void setAge(int age)
    {
        this->age = age;
    }
    int getAge() { return this->age; }
};
// child class or subclass or derived class
//          mode of inher
class Male : protected Human
{
    public:
    void printAge(){
        cout << getAge() << endl;
    }
};

int main()
{
    Male G;
    // cout << G.age;
    /* I.cpp: In function 'int main()':
    I.cpp:41:15: error: 'int Human::age' is inaccessible within this context
     cout << G.age;
               ^~~
    I.cpp:12:9: note: declared here
     int age;*/
    G.printAge();

    return 0;
}