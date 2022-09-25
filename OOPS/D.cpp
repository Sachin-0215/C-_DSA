#include<iostream>
using namespace std;

class Codehelp{
// private:

public:
    // default constructor having no argument
    int subs;
    int views;    
    Codehelp(){
        subs = 0;
        views = 0;
        cout << "Creating an object, I am in default constructor"<<endl;
    }

    // Parameterised constructor
    Codehelp(int subs,int views){
        this->subs = subs;
        this->views = views;
        cout << "I am in parameterised constructor" << endl;
    }

    Codehelp(int subsCount,int ViewsCount,int n){
        subs = n*subsCount;
        views = n*ViewsCount;
        cout << "I am in second parameterised constructor" << endl<<subs<<" "<<views<<endl;
    }

    //copy constructor
    Codehelp(Codehelp &temp){
        this->subs = temp.subs;
        this->views = temp.views;
        cout << "I am in copy constructor " << endl;
    }
    // Codehelp(Codehelp *temp){
    //     this->subs = temp->subs;
    //     this->views = temp->views;
    //     cout << "I am in copy constructor " << endl;
    // }

    // Codehelp(Codehelp temp){
    //     this->subs = temp.subs;
    //     this->views = temp.views;
    //     cout << "I am in copy constructor " << endl;
    // }D.cpp:37:27: error: invalid constructor; you probably meant 'Codehelp (const Codehelp&)'
    //  Codehelp(Codehelp temp){

    // getter for subs Data member
    int getSubs()
    {
        return subs;
    }
    // setter for subs data member
    void setSubs(int value)
    {
        subs = value;
    }
    int getviews()
    {
        return views;
    }
    void setViews(int V1)
    {
        views = V1;
    }
};

int main()
{
    // // static allocation
    // Codehelp c;

    // // dynamic allocation
    // Codehelp *ch = new Codehelp();
    // // create in stack    // created in heap
    // // when object is created first call goes to default constructor
    // Codehelp *cH = new Codehelp(2,3);
    // Codehelp *four = new Codehelp(2, 3, 4);

    Codehelp first;
    Codehelp second(first);

    return 0;
}