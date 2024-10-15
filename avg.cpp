#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int avg = (arr[0] + arr[1]) / 2;
        for (int i = 2; i < n; i++)
        {
            avg = (avg + arr[i]) / 2;
        }
        cout << avg << endl;
    }
}