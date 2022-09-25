#include <iostream>
using namespace std;

void col_wise_sum(int a[3][4], int row, int col)
{
    int Max = INT16_MIN;
    for (int i = 0; i < col; i++)
    {
        // for each col
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += a[j][i];
            // cout << a[j][i] << " ";
        }
        // cout << endl;
        cout << sum << " ";
        Max = max(sum, Max);
    }
    cout << endl;
    cout << "Maximum sum is " << Max << endl;
}
int main()
{
    int a[3][4] = {{3, 5, 11, 2}, {7, 9, 8, 0}, {5, 0, 1, 3}};
    col_wise_sum(a, 3, 4);
    return 0;
}