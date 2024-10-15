#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<vector<char>> grid(n, vector<char>(n));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
            }
        }

        int div = n / k;

        vector<vector<char>> reducedGrid(div, vector<char>(div));

        for (int i = 0; i < div; i++)
        {
            for (int j = 0; j < div; j++)
            {

                reducedGrid[i][j] = grid[i * k][j * k];
            }
        }

        for (int i = 0; i < div; i++)
        {
            for (int j = 0; j < div; j++)
            {
                cout << reducedGrid[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
