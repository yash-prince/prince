#include <bits/stdc++.h>
using namespace std;
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
            t=row;
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
            t=row;
            for (int i = 0; i < 3; i++)
            {
                if (v[t][col + 1]==digit)
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
            t=row;
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
            int t=row-1;
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
            t=row-1;
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
            int t=row-1;
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
            t=row-1;
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
            t=row-2;
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
            t=row-2;
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
            t=row-2;
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
            t=row-2;
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
            t=row-2;
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
bool play_sudoku(vector<vector<int>> &v, int n) {
    int row = -1, col = -1;
    bool isEmpty = true;

    // Find an empty cell
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j] == 0) {
                row = i;
                col = j;
                isEmpty = false;
                break;
            }
        }
        if (!isEmpty) {
            break;
        }
    }

    if (isEmpty) {
        return true; // No empty space left, puzzle solved
    }

    for (int digit = 1; digit <= 9; digit++) {
        if (check_digit(v, col, row, digit)) {
            v[row][col] = digit;
            if (play_sudoku(v, n)) {
                return true;
            }
            v[row][col] = 0; // Backtrack
        }
    }

    return false;
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
    if(play_sudoku(v,9)){
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
        }
        
    }
}