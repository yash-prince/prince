#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
bool check_possible(vector<int> & v , int n ,int x){
    int start=0;
    int end= n;
    for (int i = end - 1; i >= 0; i--)
    {
        int z=v[start] * v[i];
        x =x /z;
        // if()
    }
    
}
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    int z = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        z *= a[i];
    }
    vector<int> divisor[N];
    vector<int> check(N, 0), hp(N, 0), lp(N, 0);
    for (int i = 2; i < N; i++)
    {
        for (int j = i; j < N; j += i)
        {
            divisor[j].push_back(i);
        }
    }
    for (int i = 2; i < N; i++)
    {
        if (check[i] == 0)
        {
            hp[i] = lp[i] = i;
            for (int j = i * 2; j < N; j += i)
            {
                hp[j] = i;
                if (lp[j] == 0)
                {
                    lp[j] = i;
                }
                check[j] = 1;
            }
        }
    }
    while (q--)
    {
        int x;
        cin >> x;
        vector<int> prime_factor;
        while (x > 1)
        {
            int lower_prime = lp[x];
            while (x % lower_prime == 0)
            {
                x /= lower_prime;
                prime_factor.push_back(lower_prime);
            }
        }
    }
}