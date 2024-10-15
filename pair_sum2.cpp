#include<bits/stdc++.h>
using namespace std;
bool check_sum(int a[],int k,int n){
    int start =0;
    int end = n-1;
    int sum=a[start]+a[end];
    while(start<end){
    if(sum==k){
        return true;
    }else if(sum<k){
        start++;
    }else{
        end++;
    }
    }
    return false;
}
int main(){
int n,k;
cin>>n>>k;
int ar[n];
for (int i = 0; i < n; i++)
{
    cin>>ar[i];
}
sort(ar,ar+n);
if(check_sum(ar,k,n)){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}