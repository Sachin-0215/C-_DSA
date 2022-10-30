#include <iostream>
using namespace std;

void divide(int a, int b = 2)
{
    int res = a / b;
    cout << res << " " << endl;
}

int main()
{
    divide(12);

    divide(20, 5);

    return 0;
}