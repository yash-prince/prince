#include <bits/stdc++.h>
using namespace std;
void gcd(int n, int m)
{
    int k = n;
    if (m % k == 0)
    {
        cout << k;
        return;
    }
    n = m % n;
    m = k;
    gcd(n, k);
}
int main()
{
    int n, m;
    cin >> n >> m;
    gcd(n < m ? n : m, m > n ? m : n);
    cout<<__gcd(12,18);
}