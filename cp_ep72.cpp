#include <bits/stdc++.h>
using namespace std;
int m, n;
void dfs(vector<vector<int>> &grid, int initialColor, int newColor, int i, int j)
{
    if (i < 0 || j < 0)
        return;
    if (i >= m || j >= n)
        return;
    if (grid[i][j] != initialColor)
        return;
    grid[i][j] = newColor;
    dfs(grid, initialColor, newColor, i + 1, j);
    dfs(grid, initialColor, newColor, i - 1, j);
    dfs(grid, initialColor, newColor, i, j + 1);
    dfs(grid, initialColor, newColor, i, j - 1);
}
int main()
{  cin >> m >> n;
   vector<vector<int>> grid(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
    int initialColor = 1;
    int newColor = 2;
    int ct = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == initialColor )
            {
                ct++;
                dfs(grid, initialColor, newColor, i, j);
            }
        }
    }
    cout << ct;
}