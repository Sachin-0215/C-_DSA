#include <iostream>
using namespace std;

// Mode of inheriteance - protected

// parent class or superclass or base class
class Human
{
protected:
    int height;
    int weight;
    int age;

public:
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
        cout << this->age << endl;
    }
};

int main()
{
    Male AG;
    AG.printAge();
    // cout<<AG.age<<endl;

    return 0;
}