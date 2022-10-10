// friend function

#include <iostream>
using namespace std;

class Math
{
private:
    int value;

public:
    Math()
    {
        value = 405;
    }
    friend void printValue(Math m);
};
void printValue(Math temp)
{
    cout << temp.value << endl;
}

int main()
{
    Math obj;
    printValue(obj);

    return 0;
}