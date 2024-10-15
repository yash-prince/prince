#include <bits/stdc++.h>
using namespace std;
bool check_empty(vector<vector<int>> &v, int n, int col, int row)
{
    if (v[row][col] == 0)
    {
        return true;
    }

    return false;
}
bool check_digit(vector<vector<int>> &v, int col, int row, int digit)
{
    for (int i = 0; i < 9; i++)
    {
        if (v[row][i] == digit)
        {
            return false;
        }
        else
            continue;
    }
    for (int i = 0; i < 9; i++)
    {
        if (v[i][col] == digit)
        {
            return false;
        }
        else
            continue;
    }
    if ((row + 1) % 3 == 1)
    {
        if ((col + 1) % 3 == 1)
        {
            int t = row;
            int r = col + 1;
            for (int i = 0; i < 3; i++)
            {
                if (v[t][r] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
            t = row;
            for (int i = 0; i < 3; i++)
            {
                if (v[t][r + 1] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
        }
        if ((col + 1) % 3 == 2)
        {
            int t = row;

            for (int i = 0; i < 3; i++)
            {
                if (v[t][col - 1] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
            t = row;
            for (int i = 0; i < 3; i++)
            {
                if (v[t][col + 1] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
        }
        if ((col + 1) % 3 == 0)
        {
            int t = row;
            for (int i = 0; i < 3; i++)
            {
                if (v[t][col - 1] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
            t = row;
            for (int i = 0; i < 3; i++)
            {
                if (v[t][col - 2] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
        }
    }
    if ((row + 1) % 3 == 2)
    {

        if ((col + 1) % 3 == 1)
        {
            int t = row - 1;
            int z = col + 1;
            for (int i = 0; i < 3; i++)
            {
                if (v[t][z] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
            t = row - 1;
            for (int i = 0; i < 3; i++)
            {

                if (v[t][z + 1] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
        }
        if ((col + 1) % 3 == 2)
        {
            int t = row - 1;
            for (int i = 0; i < 3; i++)
            {
                if (v[t][col - 1] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
            t = row - 1;
            for (int i = 0; i < 3; i++)
            {
                if (v[t][col + 1] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
        }
        if ((col + 1) % 3 == 0)
        {
            int t = row - 1;
            for (int i = 0; i < 3; i++)
            {
                if (v[t][col - 1] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
            t = row - 1;
            for (int i = 0; i < 3; i++)
            {
                if (v[t][col - 2] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
        }
    }
    if ((row + 1) % 3 == 0)
    {
        int t = row - 2;
        if ((col + 1) % 3 == 1)
        {
            for (int i = 0; i < 3; i++)
            {
                if (v[t][col + 1] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
            t = row - 2;
            for (int i = 0; i < 3; i++)
            {
                if (v[t][col + 2] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
        }
        if ((col + 1) % 3 == 2)
        {
            t = row - 2;
            for (int i = 0; i < 3; i++)
            {
                if (v[t][col - 1] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
            t = row - 2;
            for (int i = 0; i < 3; i++)
            {
                if (v[t][col + 1] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
        }
        if ((col + 1) % 3 == 0)
        {
            t = row - 2;
            for (int i = 0; i < 3; i++)
            {
                if (v[t][col - 1] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
            t = row - 2;
            for (int i = 0; i < 3; i++)
            {
                if (v[t][col - 2] == digit)
                {
                    return false;
                }
                else
                {
                    t++;
                }
            }
        }
    }
    return true;
}
bool play_sudoko(vector<vector<int>> &v, int n, int col)
{
    int c = col;
    if (c >= n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return true;
    }
    for (int row = 0; row < n; row++)
    {
        if (check_empty(v, n, c, row))
        {
            for (int i = 1; i <= 9; i++)
            {
                if (check_digit(v, c, row, i))
                {
                    v[row][c] = i;
                    if (row < 8)
                    {
                        play_sudoko(v, n, c);
                    }
                    else if (row == 8)
                    {
                        play_sudoko(v, n, c + 1);
                    }
                    v[row][c] = 0;
                }
            }
            return false;
        }
        if(row==8)
        {
            play_sudoko(v, n, c + 1);
        }
    }
}
int main()
{
    vector<vector<int>> v(9, vector<int>(9));
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> v[i][j];
        }
    }
    play_sudoko(v, 9, 0);
}