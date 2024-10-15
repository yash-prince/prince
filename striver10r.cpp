#include<bits/stdc++.h>
using namespace std;
void sum_subset(int arr[],vector<int>&v,vector<int>&v1,int l,int r){
    if(l>r){
        int sum=0;
        for (int  i = 0; i < v.size(); i++)
        {
            sum +=v[i];
        }
        v1.push_back(sum);
        return;
    }
    v.push_back(arr[l]);
    sum_subset(arr,v,v1,l+1,r);
    v.pop_back();
    sum_subset(arr,v,v1,l+1,r);
}
int main(){
int n;
cin>>n;
int a[n];
vector<int> v;
vector<int> v1;
for (int  i = 0; i < n; i++)
{
    cin>>a[i];
}
sum_subset(a,v,v1,0,n-1);
sort(v1.begin(),v1.end());
for (int i = 0; i < v1.size(); i++)
{
    cout<<v1[i]<<" ";
}
}