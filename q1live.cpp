#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a[5];
        for (int i = 0; i < 5; i++)
        {
            a[i] = 0;
        }

        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < (4 * n); i++)
        {
            if (s[i] == 'A')
            {
                a[0]++;
            }
            if (s[i] == 'B')
            {
                a[1]++;
            }
            if (s[i] == 'C')
            {
                a[2]++;
            }
            if (s[i] == 'D')
            {
                a[3]++;
            }
            if (s[i] == '?')
            {
                a[4]++;
            }
        }
        int sum = 0;
        for (int i = 0; i < 4; i++)
        {
            if (a[i] <= n)
            {
                sum += a[i];
            }
            else if (a[i] > n)
            {
                sum += n;
            }
        }
        cout << sum << endl;
    }
}
