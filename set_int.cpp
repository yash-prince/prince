#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        bool set=false;
        for (int i = 0; i < n; i++)
        {
           cin>>a[i];
        }
        sort(a,a+n);
        
        for (int i = 1; i < n; i++)
        {
            if(a[i]-a[i-1] > 1){
                set=true;
                break;
            }
        }
        if(set){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
}