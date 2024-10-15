#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < t; j++)
    {
        for (int b = 0; b < a[j].length(); b++)
        {
            a[j][b] = a[j][b] - 32;
        }
        cout << a[j];
        cout << endl;
    }
}