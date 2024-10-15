#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long m;
        cin >> n >> m;

        vector<int> petals(n);
        for (int i = 0; i < n; i++)
        {
            cin >> petals[i];
        }
        sort(petals.begin(), petals.end());

        long long current_cost = 0;
        long long current_petals = 0;
        long long max_petals = 0;
        int left = 0;
        if (petals[0] > m)
        {
            cout << 0 << endl;
            continue;
        }

        for (int right = 0; right < n; ++right)
        {
            current_cost += petals[right];
            current_petals += petals[right];
            while (current_cost > m || (petals[right] - petals[left] > 1))
            {
                current_cost -= petals[left];
                current_petals -= petals[left];
                left++;
            }
            max_petals = max(max_petals, current_petals);
        }
        cout << max_petals << endl;
    }

    return 0;
}
