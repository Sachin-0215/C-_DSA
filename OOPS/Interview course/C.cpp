// getters and setters

#include <iostream>
using namespace std;

class Hero
{
private:
    int level;
    int health;

public:
    // getters for Level Data member
    int getLevel() { return level; }
    
    // setter for Level data member
    void setLevel(int value)
    {
        level = value;
        cout << "Level :" << level;
    }

    // Explore shortcut for getter setter and anotation for getter and setter
    
};

int main()
{
    Hero S;
    S.getLevel();
    S.setLevel(4);

    // S.level; // inaccessible
    //     error: 'int Hero::level' is private within this context
    //      S.level; // inaccessible
    //        ^~~~~
    // C.cpp:9:9: note: declared private here
    //      int level;
    //          ^~~~~
    // C.cpp:26:7: note: field 'int Hero::level' can be accessed via 'int Hero::getLevel()'
    //      S.level; // inaccessible
    //        ^~~~~
    //        getLevel()

    return 0;
}