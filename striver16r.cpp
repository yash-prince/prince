#include <bits/stdc++.h>
using namespace std;
bool check_box(  vector<vector<int>> &v, int row, int col)
{
    if (v[row][col] == 0)
    {
        return true;
    }
    return false;
}
bool check_con(  vector<vector<int>> &v, int row, int col, int digit)
{
   int n = v.size();
    if (row > 0 && v[row - 1][col] == digit) return false;
    if (col > 0 && v[row][col - 1] == digit) return false;
    if (col < n - 1 && v[row][col + 1] == digit) return false;
    if (row < n - 1 && v[row + 1][col] == digit) return false;
    if (row < n - 1 && col < n - 1 && v[row + 1][col + 1] == digit) return false;
    if (row < n - 1 && col > 0 && v[row + 1][col - 1] == digit) return false;
    if (row > 0 && col < n - 1 && v[row - 1][col + 1] == digit) return false;
    if (row > 0 && col > 0 && v[row - 1][col - 1] == digit) return false;
    return true;
}
bool check_node(vector<vector<int>> &v, int m, int n,int count)
{
    if (count==n)
    {
        return true;
    }
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            if (check_box(v, i, j))
            {    
                for (int k = 1; k <= m; k++)
                {
                    if (check_con(v, i, j, k))
                    {
                        v[i][j] = k;
                        count++;
                        if (check_node(v, m, n,count))
                        {
                            return true;
                        }
                        v[i][j]=0;
                        count--;
                    }
                }
                return false;
            }
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<vector<int>> v(n / 2, vector<int>(n / 2));
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            v[i][j] = 0;
        }
    }
    if (check_node(v, m,n,0))
    {
        cout << "yes";
    }
    else{
        cout << "no";
    }
}