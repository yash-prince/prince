#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n];
    
    int k;
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        k = m;
        k = n - (m + 1);
        b[i] = a[k];
        m++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}