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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int robin_gold = 0;
        int given_gold_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {

                robin_gold += a[i];
            }
            else if (a[i] == 0 && robin_gold > 0)
            {

                given_gold_count++;
                robin_gold--;
            }
        }

        cout << given_gold_count << endl;
    }

    return 0;
}