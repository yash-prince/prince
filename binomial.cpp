#include<bits/stdc++.h>
using namespace std;
int M=1e9+7;
int re_pow(int n , int k){
    int a=2;
    if(k==0 || n==k){
        return 1;
    }
    int res = re_pow(n,k/2);
    if(k & 1){
        return (a * ((res * 1ll * res)% M))%M;
    }else{
        return (res * 1ll * res)%M;
    }
}
int main(){
    
        int t;
        cin>>t;
        int arr[t];
        int arr1[t];

        for (int i = 0; i < t; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < t; i++)
        {
            cin>>arr1[i];
        }
        for (int i = 0; i < t; i++)
        {
            cout<<re_pow(arr[i],arr1[i])<<endl;
        }
        
}