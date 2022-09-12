#include <iostream>
using namespace std;

int main(int argc, char **) // second argument of 'int main(int, char)' should be 'char **' [-Wmain]

// void main()//error: '::main' must return 'int'
{
    // cout < /**/ < "Consistency is the key to success";   // << --- it should be together
    cout /* */ << "Be consistent in your study"<<endl;

    // without return 0 it is also work

    cout << "hello /* This is comment */ World!";
    // cout   </* THIS IS << */<  "hello World!";  In function 'int main(int, char**)':
    // basic.cpp:17:29: error: expected primary-expression before '<' token
    // cout < /* THIS IS << */ < "hello World!";

    return (0);
}