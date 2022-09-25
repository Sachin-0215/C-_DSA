#include <iostream>
using namespace std;

class Coder
{
private:
    int subs;
    int views;

public:
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

    return 0;
}