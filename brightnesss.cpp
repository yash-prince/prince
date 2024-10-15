#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int n = 0;
        int initial_no = 2;
        int ct = 0;
        while (ct != k)
        {
            if (!((n << initial_no) & 1))
            {
                n = n | (1 << initial_no);

                ct++;
            }
            else
            {
                n = n & (0 << initial_no);
            }
            n = n >> initial_no;
        }
    }
}