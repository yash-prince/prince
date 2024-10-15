#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a[101];
    int r = 1;
    for (int i = 0; i <= 100; i++)
    {
        if (i == 0 || i == 1)
        {
            a[i] = i;
        }
        else
        {
            a[i] = ((i * i) - 2);
        }
    }
    int b[101];
    for (int i = 0; i <= 100; i++)
    {
        if (i == 0 || i == 1)
        {
            b[i] = i;
        }
        else
        {
            b[i] = r;
            r += 2;
        }
    }
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ct = 0;
        if (k < a[n])
        {
            for (int i = n; i > 1, k > 0; i--)
            {
                if (i == n)
                {
                    k -= i;
                    ct++;
                }
                else
                {
                    k -= i;
                    ct++;
                    if (k >= i)
                    {
                        k -= i;
                        ct++;
                    }
                }
            }
        }
        else if (k >= a[n])
        {
            if (k == a[n])
            {
                ct = b[n];
            }
            else if (k == (a[n] + 1))
            {
                ct = b[n] + 1;
            }
            else if (k == (a[n] + 2))
            {
                ct = b[n] + 2;
            }
        }

        cout << ct << endl;
    }
    return 0;
}