#include <bits/stdc++.h>
using namespace std;

void print_vec(int arr[], vector<int> &v,  int l, int r)
{
    if (l > r)
    {
       for (int i = 0; i < v.size(); i++)
       {
        cout<<v[i]<<" ";
       }
       cout<<endl;
       
        return;
    }
    v.push_back(arr[l]);
    print_vec(arr, v, l + 1, r);
    v.pop_back();
    int n = l;
    
    for (int i = n; i<=r; i++)
    {
        if(arr[n]==arr[i+1]){
            continue;
        }
        if (arr[n] != arr[i+1])
        {
            print_vec(arr, v, i+1, r);
            break;
        }
    }
    
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    
    print_vec(a, v, 0, n - 1);
    
}