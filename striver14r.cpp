#include <bits/stdc++.h>
using namespace std;
bool is_safe(vector<vector<char>> &v, int n, int col, int row)
{

    for (int i = 0; i < n; i++)
    {
        if (v[row][i] == '-')
        {
            continue;
        }
        else
            return false;
    }
    for (int j = 0; j < n; j++)
    {
        if (v[j][col])
        {
            continue;
        }
        else
            return false;
    }
    int a = col;
    for (int k = row; k >= 0 && a < n; k--)
    {
        if (v[k][a] == '-')
        {
            a++;
            continue;
        }
        else return false;
    }
    int b = col;
    for (int c = row; c >= 0 && b >= 0; c--)
    {
        if (v[c][b] == '-')
        {
            b--;
            continue;
        }else return false;
    }
    int t = col;
    for (int m = row; m < n && t < n; m++)
    {
        if (v[m][t] == '-')
        {
            t++;
            continue;
        }
        else
            return false;
    }
    int x = col;
    for (int i = row; i < n && x >= 0; i++)
    {
        if (v[i][x] == '-')
        {
            x--;
            continue;
        }
        else return false;
    }
    return true;
}
void place_queen(int n, vector<vector<char>> &v,  int col)
{

    if (col >= n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
        cout<<endl;
        return;
    }
   
    for (int row = 0; row < n; row++)
    {

        if (is_safe(v, n, col, row) != 0)
        {
            v[row][col] = 'q';
            place_queen(n, v, col + 1);
            v[row][col] = '-';
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int count = 0;
    vector<vector<char>> v(n,vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v[i][j] = '-';
        }
    }
    place_queen(n,v,0);
}
