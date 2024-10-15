#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;

        vector<vector<int>> s_a(26, vector<int>(n + 1, 0));
        vector<vector<int>> s_b(26, vector<int>(n + 1, 0));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                s_a[j][i + 1] = s_a[j][i];
                s_b[j][i + 1] = s_b[j][i];
            }
            s_a[a[i] - 'a'][i + 1]++;
            s_b[b[i] - 'a'][i + 1]++;
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--;
            int ct = 0;
            for (int i = 0; i < 26; i++)
            {
                int countA = s_a[i][r] - s_a[i][l];
                int countB = s_b[i][r] - s_b[i][l];
                ct += abs(countA - countB);
            }
            cout << ct / 2 << endl;
        }
    }
    return 0;
}
