#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
           cin>>arr[i];
        }
        map<long long , long long > mp;
        for(long long i=0;i<n;i++){
        
        long long temp=(i+1)*(n-i)-1;
        mp[temp]++;
        
        if(i>0){
            long long temp2=(n-i)*i;
            mp[temp2]+=(arr[i]-arr[i-1]-1);
        }
    }
    while(q--){
        long long k;
        cin>>k;
        if(mp.find(k)==mp.end()){
            cout<<0<<" ";
        }
        else 
            cout<<mp[k]<<" ";
    }
    cout<<endl;
}
}