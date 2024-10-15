#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
long long ar[N];
int main()
{
    int n;
    cin >> n;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a, b, k;
        cin >> a >> b >> k;
        ar[a] = ar[a] + k;
        ar[b+1]=ar[b+1]-k;
    }
    for (int i = 1; i <= n; i++)
    {
        ar[i]=ar[i]+ar[i-1];
    }
    sort(ar+1,ar+(n+1));
    cout<<ar[n];
    
}