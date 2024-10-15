#include <bits/stdc++.h>
using namespace std;
const int N = 3e5 + 20;
int a[N], b[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int al[n], bob[n];
        for (int i = 0; i < n; i++)
        {
            cin >> al[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> bob[i];
        }
        int al_st = 0;
        int bob_st = 0;
        int al_en = n - 1;
        int bob_en = n - 1;
        int c = n - 1;
        while (c--)
        {
            if (bob_st <= bob_en)
            {
                if (al[al_st] != bob[bob_st] && al[al_st] != bob[bob_en])
                {
                    a[al[al_st]] = 1;
                    al_st++;
                    if (a[bob[bob_st]] == 1)
                    {
                        b[bob[bob_st]] = 1;
                        bob_st++;
                        // continue;
                    }
                    else if (a[bob[bob_en]] == 1)
                    {
                        b[bob[bob_en]] = 1;
                        bob_en--;
                        // continue;
                    }
                    else if (a[bob[bob_st]] != 1 && a[bob[bob_en]] != 1)
                    {
                        if (bob[bob_st] == al[al_st] || bob[bob_st] == al[al_en])
                        {
                            b[bob[bob_st]] = 1;
                            bob_st++;
                            // continue;
                        }
                        else if (bob[bob_en] == al[al_st] || bob[bob_en] == al[al_en])
                        {
                            b[bob[bob_en]] = 1;
                            bob_en--;
                            // continue;
                        }else if((bob[bob_st] != al[al_st] || bob[bob_st] != al[al_en]) && (bob[bob_en] != al[al_st] || bob[bob_en] != al[al_en])){
                            b[bob[bob_st]] = 1;
                            bob_st++;
                            // continue;
                        }
                    }
                }
                else if (al[al_en] != bob[bob_st] && al[al_en] != bob[bob_en])
                {
                    a[al[al_en]] = 1;
                    al_en--;
                    if (a[bob[bob_st]] == 1)
                    {
                        b[bob[bob_st]] = 1;
                        bob_st++;
                        // continue;
                    }
                    else if (a[bob[bob_en]] == 1)
                    {
                        b[bob[bob_en]] = 1;
                        bob_en--;
                        // continue;
                    }
                    else if (a[bob[bob_st]] != 1 && a[bob[bob_en]] != 1)
                    {
                        if (bob[bob_st] == al[al_st] || bob[bob_st] == al[al_en])
                        {
                            b[bob[bob_st]] = 1;
                            bob_st++;
                            // continue;
                        }
                        else if (bob[bob_en] == al[al_st] || bob[bob_en] == al[al_en])
                        {
                            b[bob[bob_en]] = 1;
                            bob_en--;
                            // continue;
                        }else if((bob[bob_st] != al[al_st] || bob[bob_st] != al[al_en]) && (bob[bob_en] != al[al_st] || bob[bob_en] != al[al_en])){
                            b[bob[bob_st]] = 1;
                            bob_st++;
                            // continue;
                        }
                    }
                }
                else if (al[al_st] == bob[bob_st] || al[al_st] == bob[bob_en] && al[al_en] == bob[bob_st] || al[al_en] == bob[bob_en])
                {
                    a[al[al_st]] = 1;
                    al_st++;
                    if (a[bob[bob_st]] == 1)
                    {
                        b[bob[bob_st]] = 1;
                        bob_st++;
                        // continue;
                    }
                    else if (a[bob[bob_en]] == 1)
                    {
                        b[bob[bob_en]] = 1;
                        bob_en--;
                        // continue;
                    }
                    else if (a[bob[bob_st]] != 1 && a[bob[bob_en]] != 1)
                    {
                        if (bob[bob_st] == al[al_st] || bob[bob_st] == al[al_en])
                        {
                            b[bob[bob_st]] = 1;
                            bob_st++;
                            // continue;
                        }
                        else if (bob[bob_en] == al[al_st] || bob[bob_en] == al[al_en])
                        {
                            b[bob[bob_en]] = 1;
                            bob_en--;
                            // continue;
                        }else if((bob[bob_st] != al[al_st] || bob[bob_st] != al[al_en]) && (bob[bob_en] != al[al_st] || bob[bob_en] != al[al_en])){
                            b[bob[bob_st]] = 1;
                            bob_st++;
                            // continue;
                        }
                    }
                }
            }
        }
        int ct = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0 && b[i] == 0)
            {
                ct++;
            }
        }
        if (ct >= 1)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }
}