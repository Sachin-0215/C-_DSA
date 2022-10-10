#include <iostream>
using namespace std;

/*
        A
       ABA
      ABCBA
     ABCDCBA



*/

void pattern17(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        char ch = 'A';
        for (int col = 1; col <= row; col++)
        {
            cout << ch;
            ch++;
        }
        ch -= 2;
        for (int col = 2; col <= row; col++)
        {
            cout << ch;
            ch--;
        }
        cout << endl;
    }
}

int main()
{
    char ch = 'A';
    pattern17(5);

    return 0;
}