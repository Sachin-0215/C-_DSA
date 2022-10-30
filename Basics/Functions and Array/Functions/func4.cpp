#include <iostream>
using namespace std;

void printName(int &n)
{
    while (n--)
    {
        cout << "C++ " <<n<< endl;
    }
    n--;
}
int main()
{
    int num;
    cin >> num;
    printName(num);

    cout << num;

    return 0;
}