#include <iostream>
using namespace std;

void even(int);
void odd(int);

int main()
{
    int n;
    do
    {
        cout << "Please ,enter the number (or press 0 to exit) -> " << endl;
        cin >> n;
        odd(n);

    } while (n != 0);

    return 0;
}
void odd(int a)
{
    if (a & 1 != 0)
    {
        cout << "It is an odd number " << endl;
    }
    else
    {
        even(a);
    }
}
void even(int b)
{
    if ((b % 2) == 0)
    {
        cout << "It is an even number " << endl;
    }
    else
    {
        odd(b);
    }
}