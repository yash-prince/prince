#include <bits/stdc++.h>
using namespace std;

bool print(int arr[], vector<int> &v, int n, int q,int count)
{

    if (q >= n)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        
        return true;
    }

    v.push_back(arr[q]);
    if (print(arr, v, n, q + 1, count) == true)
    {
        return true;
    }
    else
        return false;
    v.pop_back();
    if (print(arr, v, n, q + 1, count) == true)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> v;
    print(a, v, n, 0,count);
}