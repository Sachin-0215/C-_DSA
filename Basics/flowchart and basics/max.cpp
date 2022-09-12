#include <iostream>
// using namespace std;

int main(int argc, char **argv)
{
    int a, b;
    std::cin >> a >> b;
    if (a > b)
    {
        std::cout << a << " is greater.";
    }
    else
    {
        std::cout << b << " is less.";
    }
    return 0;
}