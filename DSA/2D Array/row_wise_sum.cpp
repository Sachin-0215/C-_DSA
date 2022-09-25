#include <iostream>
using namespace std;

void row_wise_sum(int a[3][4], int row, int col)
{
    int Max = INT16_MIN;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += a[i][j];
        }
        cout << sum << " ";
        Max = max(sum, Max);
    }
    cout << endl;
    cout << "Maximum sum is :" << Max<<endl;
}
int main()
{
    int a[3][4] = {{3, 5, 11, 2}, {7, 9, 8, 0}, {5, 0, 1, 3}};
    row_wise_sum(a, 3, 4);

    return 0;
}