#include<bits/stdc++.h>
using namespace std;
void print_array(int arr[],vector<int> &v,int l,int r,int sum,int m){
    if(l>r){
        if(sum==m){
            for (int i = 0; i < v.size(); i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
            return;
        }
        return;
    }
    v.push_back(arr[l]);
    sum +=arr[l];
    print_array(arr,v,l+1,r,sum,m);
    v.pop_back();
    sum -=arr[l];
    if(arr[l]==arr[l+1]){
        print_array(arr,v,l+2,r,sum,m);
    }else if(arr[l]!=arr[l+1]){
        print_array(arr,v,l+1,r,sum,m);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    vector<int>v;
    int m;
    cin>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    print_array(a,v,0,n-1,0,m);
}