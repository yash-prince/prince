#include <bits/stdc++.h>
using namespace std;
bool allZero(int arr[], int size)
{
    for (int i = 1; i <= size; ++i)
    {
        if (arr[i] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 1; j <= n; j++)
        {
            cin >> a[j];
        }
        for (int k = 2; k <= n - 1; k++)
        {
            while ((a[k - 1] != 0 && a[k - 1] > 0) && (a[k] != 0 && a[k] > 0) && (a[k + 1] != 0 && a[k + 1] > 0))
            {
                a[k - 1] = a[k - 1] - 1;
                a[k] = a[k] - 2;
                a[k + 1] = a[k + 1] - 1;
                if (a[k - 1] < 0 || a[k] < 0 || a[k + 1] < 0)
                {
                    break;
                }
            }
        }
        if (allZero(a, n))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}