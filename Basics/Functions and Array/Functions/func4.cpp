#include <iostream>
using namespace std;

void printName(int n)
{
    while (n--)
    {
        cout << "C++ " << endl;
    }
}
int main()
{
    int num;
    cin >> num;
    printName(num);

    return 0;
}