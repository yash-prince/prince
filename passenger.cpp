#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int arr[n+1];
        for (int i = 0; i < n+1; i++)
        {
            arr[i]=false;
        }
        bool see=true;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            arr[a[i]]=true;
            if(i==0) continue;
            if(a[i]==1){
                if(arr[a[i]+1]==true)continue;
                else {
                    see=false;
                    cout<<"no"<<endl;
                    break;
                }
            }
            if(a[i]==n){
                if(arr[a[i]-1]==true)continue;
                else {
                    see=false;
                    cout<<"no"<<endl;
                    break;
                }
            }
            if(a[i]>1 && a[i]<=n-1){
                if(arr[a[i]+1] == true || arr[a[i]-1]==true)continue;
               else {
                    see=false;
                    cout<<"no"<<endl;
                    break;
                }
            }
        }
        if(see){
            cout<<"yes"<<endl;
        }
        
    }
}