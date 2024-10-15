#include <bits/stdc++.h>
using namespace std;
void print_element(int arr[],int l,int r,vector<int>&v,int t){
    
    if(t==0){
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;  
    }
    if (t< arr[l]) {
        return;
    }
    
    v.push_back(arr[l]);
    print_element(arr,l,r,v,t-arr[l]);
    v.pop_back();
    print_element(arr,l+1,r,v,t);
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int a[n];
    vector<int> v;
    int k = m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    print_element(a,0,n-1,v,m);
}