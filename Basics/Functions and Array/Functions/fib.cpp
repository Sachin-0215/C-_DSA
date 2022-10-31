#include <iostream>
using namespace std;

void fibonaci(int n)
{
    int i = -1, j = 1;
    //cout << i << " " << j << " ";
    int sum = 0;
    for (int a = 0; a < n; a++)
    {
        sum = i + j;
        cout << sum << " ";
        i = j;
        j = sum;
    }
}

int main()
// void main()--->error: '::main' must return 'int'
//  void main()
{
    int number;
    cout << "Enter the number " << endl;
    cin >> number;
    cout << "Fibonaci series : ";
    fibonaci(number);

    return 0;
} // 0  1  1 2 3 5