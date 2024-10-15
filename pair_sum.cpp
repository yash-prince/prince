#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int pf[N];
bool check(int a[], int q, int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == q)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n, q;
    cin >> n >> q;
    int ar[n];
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 1; i < n; i++)
    {
        sum = sum + i;
    }
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            pf[k] = ar[i] + ar[j];
            k++;
        }
    }
    if (check(pf, q, sum))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}