#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >>n>> m;
        int arr[n + 1];
        for (int i = 0; i < n + 1; i++)
        {
            arr[i] = 0;
        }
        int k;
        int d;
         int ct = 0;
        for (int i = 0; i < m; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            k = c;
            d=b;
            int one_con = 0;
            int within=0;
            for (int j = a; j <= min(n, a + c * b); j += b)
            {
                if (arr[j] == 1)
                {
                    continue;
                }
                else 
                {
                    arr[j] = 1;
                    one_con++;
                    within= max(within,j);
                }
                
            }
            cout<<one_con<<" ";
            int af_div=(within-a)/d;
            // cout<<af_div<<" ";
            if (one_con == k+1 )
            {
                ct++;
            }
           
        }
        cout<<ct;
        // int sep_ct = 0;
        //     for (int i = 1; i <= n; i++)
        //     {
        //         if (arr[i] == 0)
        //         {
        //             sep_ct++;
        //         }
        //     }
        //     // cout<<sep_ct;
        //     cout << (sep_ct + ct) << endl;
    }
}