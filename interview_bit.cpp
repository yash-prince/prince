#include <bits/stdc++.h>
using namespace std;
vector<char> fact_string[100];
long long fact_int[100];
void make_string(long long x, int y)
{
    while (x > 0)
    {
        int rem = x % 10;
        char rem_char = '0' + rem;
        fact_string[y].push_back(rem_char);
        x /= 10;
    }
    
}
void bit_int(long long x, int y)
{
    int c = y;
    long long ans = 0;
    while (c != 0)
    {
        if (c & 1 == 1)
        {
            ans += x;
        }
        x += x;
        c = c>>1;
    }
    make_string(ans, y);
}
int main()
{
    int n;
    cin >> n;
    fact_int[0] = 1;
    for (int i = 1; i <= 100; i++)
    {
        fact_int[i] = fact_int[i - 1] * i;
    }
    bit_int(fact_int[n - 1], n);
    for (int i = fact_string[n].size(); i > 0; i--)
    {
        cout << fact_string[n][i-1];
    }
}