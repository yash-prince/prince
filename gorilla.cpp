#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[n];
        for (int i = m , r=1; i > 0 , r <= m; i--,r++)
        {   
            a[n-r]=i;
        }
        for (int i = 0; i < (n-m ); i++)
        {
            if(k == n){
                a[i]=k-i;
            }else if(k < n){
                a[i]=n-i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
        
    }
}