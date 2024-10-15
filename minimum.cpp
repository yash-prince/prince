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
        int ans = 0;
        if (n >= k && k > 1)
        {
            while (n >= 1)
            {
                ans = ans + n % k;
                n = n / k;
            }
        }
        else
        {
            ans = n;
        }
        cout << ans << endl;
    }
}