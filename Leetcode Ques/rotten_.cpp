#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

bool isValid(int i, int j, int n, int m, vector<vector<int>> &grid)
{
    if (i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == 1)
    {
        return true;
    }
    return false;
}

int orangesRotting(vector<vector<int>> &grid)
{
    queue<pair<int, int>> q;
    int n = grid.size();    // 3
    int m = grid[0].size(); // 3
    int fresh = 0, time = 0;

    /*
2 1 1
0 1 1
1 1 1
*/

    // counting no. of fresh and also pushing rotten orange in queue
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 2)
            {
                // push  into  the  queue
                q.push({i, j});
            }
            else if (grid[i][j] == 1)
            {
                fresh++;
            }
        }
    }

    if (fresh == 0)
    {
        return time;
    }
    // // start bfs traversal
    int size = q.size();
    int temp = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int x1 = p.first;
        int y1 = p.second;

        int ax[4] = {1, -1, 0, 0};
        int ay[4] = {0, 0, 1, -1};

        for (int i = 0; i < 4; i++)
        {
            int x = ax[i] + x1;
            int y = ay[i] + y1;

            if (isValid(x, y, n, m, grid))
            {
                temp++;
                grid[x][y] = 2;
                q.push({x, y});
            }
        }
            size--;
    //     if (temp != 0)
    //     {
    //         time++;
    //     }

    // // we checked fresh oranges are there or not
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (grid[i][j] == 1)
    //         {
    //             time = 0;
    //             break;
    //         }
    //     }
    // }
    return time == 0 ? -1 : time;

}

int main()
{
    // vector<vector<int>> grid{{2, 1, 1}, {0, 1, 1}, {1, 1, 1}};
    vector<vector<int>> grid{{2, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    cout << orangesRotting(grid);

    return 0;
}
