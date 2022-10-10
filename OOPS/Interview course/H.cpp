// inheritance

#include <iostream>
using namespace std;

// parent class or superclass or base class
class Human
{
private:
    int height;
    int weight;
    int age;
    bool t;
    char ch;

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
class Male : public Human
{
};

int main()
{
    Male BOY;
    BOY.setHeight(161);
    BOY.setWeight(45);
    BOY.setAge(18);
    cout << "Height of BOY : " << BOY.getHeight() << endl;
    cout << "Weight of BOY : " << BOY.getWeight() << endl;
    cout << "Age of BOY : " << BOY.getAge() << endl;

    // cout << "Size of Male class " << sizeof(Male)<<endl;// without inherit its empty class so size is one
    
    cout << "Size of Male class " << sizeof(Male)<<endl;
    cout << "Size of Human class " << sizeof(Human) << endl;

    return 0;
}

//mode of inheritance -> public private protected

/*            Mode of inheritance
-------------------------------------------------------------------- |
|_Base_class___|__Public______|____Protected_____|___Private________ |
|              |              |                  |                   |
| public       | public       | Protected        |    Private        |
|              |              |                  |                   |
|              |              |                  |                   |
|______________|______________|__________________|__________________ |
|              |              |                  |                   |
| protected    | Protected    |   Protected      |   Private         |
|              |              |                  |                   |
|______________|______________|__________________|___________________|
| private      |   NA         |     NA           |   NA              |
|              |              |                  |                   |
|--------------------------------------------------------------------






*/