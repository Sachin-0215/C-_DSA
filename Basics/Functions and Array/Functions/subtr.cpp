#include <iostream>
using namespace std;

int subtract(int n, int m)
{
    int sub = n - m;
    return sub;
}

int main()
{
    int a(13), b(2);
    cout << "Subtract two number -> " << subtract(a, b) << endl;
    int c = subtract(13, 7);
    int d = subtract(14, 6) + 4;
    cout << c << " " << d << endl;
    return 0;
}