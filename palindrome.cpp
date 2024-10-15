#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int m=125;
    int a[m];
    for (int i =0; i < m ; i++)
    {
        a[i]=0;
    }
    
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            a[s[i]]++;
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            
        }
    }
}