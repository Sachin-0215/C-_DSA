#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int a[3][3] = {1}; // initialise first element with 1 rest 0
    int b[2][2] = {};  // all row,col elements is 0
    int c[2][2] = {0};
    int d[4][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << b[i][j] << "  " << c[i][j] << "  ";
        }
        cout << endl;
    }
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << a[row][col] << "  " << arr[row][col] << "   ";
        }
        cout << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}