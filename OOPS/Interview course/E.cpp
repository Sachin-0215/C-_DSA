#include <iostream>
using namespace std;

// whenever we create an object first call was to constructor.constructor ka kam object mein value initialise krne ka hai
// constructor create krne ka steps explore kro

// explore - copy constructor are there in java or not?

// constructor -default , copy,parameterised
// rules - no return type, name same as class name

class Hero
{
public:
    int level;
    int health;
    int *value;

    int getLevel() { return level; }
    // default constructor(No argument) default automatically ban jata hai
    Hero()
    {
        level = 0;
        health = 0;
        cout << "Creating an object i am in constructor" << endl
             << endl;
        value = new int[5]; // dynamic array create
        for (int i = 0; i < 5; i++)
        {
            value[i] = 1;
        }
        delete[] value;
    }

    // Parameterised constructor
    Hero(int levelCount, int healthcount)
    {
        level = levelCount;
        health = healthcount;
        cout << "I am in Parameterised constructor" << endl
             << endl;
    }

    Hero(int levelCount, int healthcount, int n)
    {
        level = n * levelCount;
        health = n * healthcount;
        cout << "I am in second Parameterised constructor " << level << " " << health << endl;
    }

    void setLevel(int value)
    {
        level = value;
        cout << "Level : " << level << endl;
    }

    // This keyword - ptr to current object
    // Hero(int level, int health)
    // {
    //     this->level = level;
    //     this->health = health;
    // }
    void print() { cout << "Hii hello" << endl; }

    // Copy constructor
    Hero(Hero &temp)
    {
        this->level = temp.level;
        this->health = temp.health;
        this->value = new int[5];
        for (int i = 0; i < 5; i++)
        {
            this->value[i] = 2l;
        }
        delete[] this->value;

        cout << "I am in copy consstructor" << endl;
    }

    // Hero(Hero *temp){
    //     this->level=(*temp).level;
    //     this->health=(*temp).health;
    //     cout << "I am in copy constructor" << endl;
    // }

    // Hero(Hero temp){
    //     this->level=temp.level;
    //     this->health=temp.health;
    //     cout << "I am in copy consstructor" << endl;
    // }

    // Destructor
    ~Hero(){
        cout << "Destructor called" << endl;
    }



    // Does constructor return any value->      yes how? explore
    // anyother task other than initialisation
    // constructor vs method? explore

    // E.cpp:69:19: error: invalid constructor; you probably meant 'Hero (const Hero&)'
    //  Hero(Hero temp){
};
// pass by value mein copy create hota hai isliye reference ka use kiya taki loop ko avoid kr sake copy krne mein
int main()
{
    cout <<endl<< "Static allocation creation" << endl;
    // Hero h;
    // Hero G(2, 5);
    // Hero Ji(2, 6, 9);

    Hero b;
    // calling copy constructor
    Hero a(b);
    cout << "Before calling b, value of a at zero index is " << a.value[0] << endl;

    b.value[0] = 101;
    cout << "After calling b, value of a at zero index is " << a.value[0] << endl; // due to shaaallow copy

    // Deep copy

    // b.setLevel(10);

    cout <<endl<< "Dynamic allocation creation" << endl;
    Hero *h1 = new Hero();

    Hero *h2 = new Hero(4, 6);

    Hero *he = new Hero(2, 6, 7);

    delete h1;
    delete h2;
    delete h2;

    // Dynamic k liye manually destructor call krna hoga using delete keyword

    // how to delete dynamically allocated array

    return 0;
}