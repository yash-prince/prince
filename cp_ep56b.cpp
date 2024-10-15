#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 7;
int binExpMultiply(int a ,int b,int m);
int print_power(int a ,int b,int m);
int power_modulo(int b,int c,int m,vector<bool> &v)
{
    int phi=1;
    if(v[m]==1){
        phi *=m-1;
    }
    else if(v[m]!=1){
        phi *= m;
        for (int i = 0; i <= m; i++)
        {
            if(v[i]==1)
            {
                phi *= (1-1/i);
            }
        }
    }
    print_power(b,c,phi);
}
int binExpMultiply(int a, int b,int m)
{
    int ans = 0;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans + a) % m;
        }
        a = (a + a) % m;
        b = b >> 1;
    }
    return ans;
}
int print_power(int a, int b,int m)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans * a) % m;
        }
        a = binExpMultiply(a, a,m);
        b = b >> 1;
    }
    return ans;
}
int main()
{
    int M;
    int a, b,c;
    cin >> a >> b>>c;
    cin >> M;
    vector<bool> v(N, 1);
    v[0] = 0;
    v[1] = 0;
    for (int i = 2; i < N; i++)
    {
        if (v[i] == 1)
        {
            for (int j = i * 2; j < N; j +=i)
            {
                v[j] = 0;
            }
        }
    }
    power_modulo(b,c,M,v);
    cout<<print_power(a,power_modulo(b,c,M,v),M);
}