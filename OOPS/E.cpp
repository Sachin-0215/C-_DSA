#include<iostream>
using namespace std;

class Codehelp{
// private:

public:
    // default constructor having no argument
    int subs;
    int views;
    int *values;

    Codehelp(){
        subs = 0;
        views = 0;
        cout << "Creating an object, I am in default constructor"<<endl;
        values = new int[5];
        for (int i = 0; i < 5;i++){
            values[i] = 1;
        }
    }

    //copy constructor
    Codehelp(Codehelp &temp){
        this->subs = temp.subs;
        this->views = temp.views;
        cout << "I am in copy constructor " << endl;
    }
};

int main()
{
    Codehelp a;
    Codehelp b(a);
    cout << "Before changing a, value of b at zero index is " << b.values[0]<<endl;
    a.values[0] = 101;
    cout << "Before changing a, value of b at zero index is " << b.values[0]<<endl;


    return 0;
}