#include <iostream>
using namespace std;

/*                    col is mandatory
bool searchTarget(int a[][3], int target, int row, int col)*/

// bool searchTarget(int a[][], int target, int row, int col)
/* ls.cpp:5:27: error: declaration of 'a' as multidimensional array must have bounds for all dimensions except the first
 bool searchTarget(int a[][], int target, int row, int col)
                           ^
ls.cpp:5:28: error: expected ')' before ',' token
bool searchTarget(int a[][], int target, int row, int col)
                  ~         ^
                            )
ls.cpp:5:30: error: expected unqualified-id before 'int'
*/

bool searchTarget(int a[3][3], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == target)
                return true;
        }
    }
    return false;
}
int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << endl;
    cout << "Searching Target -> " << searchTarget(a, 12, 3, 3) << endl;
    return 0;
}