#include<bits/stdc++.h>
using namespace std;
void sum_arr(int arr[],vector<int>&v,int start,int end,int sum,int m){
if(start>end){
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
v.push_back(arr[start]);
sum +=arr[start];
sum_arr(arr,v,start+1,end,sum,  m);
sum -=arr[start];
v.pop_back();
sum_arr(arr,v,start+1,end,sum,m);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    int m;
    cin>>m;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sum_arr(a,v,0,n-1,sum,m);
    
}