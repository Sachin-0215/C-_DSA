#include<iostream>
using namespace std;

class shape{
    public:
        int a,b;
        int area(){
            return a * b;
        }
};
class Rectangle:public shape{
};

class Circle:public shape{
    public:
        int area(){
            int rad = (a / 2);
            return 3.14 * rad * rad;
        }
};

int main()
{ 
    Circle *gola=new Circle();
    (*gola).a = 6;
    cout << (*gola).area() << endl;
    return 0;
}