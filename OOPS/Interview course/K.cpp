// type of inheritance -single, Multiple ,multilevel,hierachical,hybrid
#include<iostream>
using namespace std;

class Human{
    int age;
    public:
        void print(){
            cout << this->age<<endl;
        }
};
class Male:public Human{

};
int main()
{
    Male m;
    m.print();
    return 0;
}