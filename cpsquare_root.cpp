#include <bits/stdc++.h>
using namespace std;
int find_square_root(int m)
{
    if(m==1){
        return 1;
    }
    int a[m / 2];
    for (int i = 0; i < m / 2; i++)
    {
        a[i] = i + 1;
    }
    int l = 0;
    int h = (m / 2) - 1;

    while (h - l > 1)
    {
        int mid = (l + h) / 2;
        if (a[mid] * a[mid] > m)
        {
            h = mid - 1;
        }
        else if (a[mid] * a[mid] <= m)
        {
            l = mid;
        }
    }
    if (a[l] * a[l] == m)
    {
        return a[l];
    }
    else if (a[h] * a[h] == m)
    {
        return a[h];
    }
}
int main()
{
    int m;
    cin >> m;
    cout << find_square_root(m);
}