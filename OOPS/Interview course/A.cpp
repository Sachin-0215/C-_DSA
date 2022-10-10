#include <iostream>
using namespace std;

// empty class
class empty{};

class Hero
{
    // Data memeber
    int subs;
    char a;
    bool b;
    int views;
    int getSubs()
    {
        return subs;
    }
};

int main()
{
    cout << "Size of empty class: " << sizeof(empty)<<endl;//1
    cout << "Size of Hero class: " << sizeof(Hero)<<endl;// 4 8 8 12 .. due to padding and greedy alignment
    // member funct not taking memory only data members takes memory

    // object creation
    Hero h;
    // cout << "Printing the views of hero: " << Hero.views << endl;// type name not allowed
    // cout << "Printing the views of hero: " << h.views << endl;// member "Hero::views" (declared at line 16) is inaccessibleC
    // cout << "Printing the views of hero: " << Hero::views << endl;// a nonstatic member reference must be relative to a specific object
    // cout << "Printing the views of hero: " << h.views << endl;// nothing mention in class so by default private access modifiers

    // next code file for access modifiers

    return 0;
}


// Without main() error

// C:/Program Files (x86)/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/../lib/gcc/i686-w64-mingw32/8.1.0/../../../../i686-w64-mingw32/lib/../lib/libmingw32.a(lib32_libmingw32_a-crt0_c.o):crt0_c.c:(.text.startup+0x39): undefined reference to `WinMain@16'
// collect2.exe: error: ld returned 1 exit status
// PS C:\Users\Dell\Desktop\C++ DSA\OOPS\Interview course>


// explore -  size of empty class in java