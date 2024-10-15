#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 20;
int a[N];
int n, m;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int ans = 0;
        a[n] = -1;
        for (int i = 0; i < n;)
        {

            int j = i;
            while (a[j] == a[i])
                j++;
            int l = j;
            while (a[l] == (a[i] + 1))
                l++;
            for (int c = 0; c <= (j - i); c++)
            {
                if ((c * a[i]) > m)
                    continue;
                int val = c * a[i];
                int d = min(((m - val) / (a[i] + 1)), l - j);
                val += d * (a[i] + 1);
                ans = max( ans,val);
            }
            i = j;
        }
        cout << ans << endl;
    }
}