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

        int tot_tree = (n * (n + 1)) / 2;

        if (k <= n)
        {
            tot_tree -= ((n - k) * (n - k + 1)) / 2;
        }

        if (tot_tree % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}